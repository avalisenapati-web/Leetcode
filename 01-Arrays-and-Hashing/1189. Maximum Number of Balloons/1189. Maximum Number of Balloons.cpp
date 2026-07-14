1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        unordered_map<char,int>freq;
5        for(char c:text){
6            freq[c]++;      
7          }
8
9          int ans=min({freq['b'],
10                        freq['a'],
11                        freq['l']/2,
12                        freq['o']/2,
13                        freq['n']});
14
15    return ans;;
16        
17    }
18};