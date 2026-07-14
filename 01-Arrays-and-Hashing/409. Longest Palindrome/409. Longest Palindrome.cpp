1class Solution {
2public:
3    int longestPalindrome(string s) {
4        unordered_map<char,int>f;
5        for(char c:s){
6            f[c]++;
7        }
8        bool odd=false;
9        int res=0;
10        for(auto it:f){
11            if(it.second %2==0){
12                res+=it.second;
13            }else{
14                res+=it.second-1;
15                odd=true;
16            }
17        }
18            if(odd){
19                res++;
20            }
21        
22
23        return res;
24
25        
26    }
27};