1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        
5        sort(g.begin(),g.end());
6        sort(s.begin(),s.end());
7        int i=0;//chile
8        int j=0;//cookie
9        while(i<g.size()&& j<s.size()){
10            if(s[j]>=g[i]){
11                i++;
12            }
13            j++;
14
15        }
16        return i;
17
18        
19    }
20};