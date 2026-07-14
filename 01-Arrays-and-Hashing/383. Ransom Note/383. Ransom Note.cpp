1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        unordered_map<char,int>have;//magazine
5         unordered_map<char,int>need;//ransom
6
7         for(char c:ransomNote){
8            need[c]++;
9         }
10
11
12         for(char ch:magazine){
13            have[ch]++;
14         }
15
16         for(auto it:need){
17            if(have[it.first]<it.second){
18                return false;
19            }
20         }
21
22        return true;
23    }
24};