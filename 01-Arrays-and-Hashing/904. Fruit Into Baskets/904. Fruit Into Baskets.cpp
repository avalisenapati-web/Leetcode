1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        unordered_map<int,int>mp;
5        
6        int i=0;
7        int ans=0;
8        for(int j=0;j<fruits.size();j++){
9            mp[fruits[j]]++;
10            while(mp.size()>2){
11                mp[fruits[i]]--;
12                if(mp[fruits[i]]==0){
13                    mp.erase(fruits[i]);
14                    i++;
15                }
16
17            }
18            ans=max(ans,j-i+1);
19        }
20        return ans;
21    }
22};