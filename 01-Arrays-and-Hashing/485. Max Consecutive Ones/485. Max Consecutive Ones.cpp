1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0;
5        int maxcount=0;
6        for(int x:nums){
7            if(x==1){
8                count++;
9                maxcount=max(count,maxcount);
10            }else{
11                count=0;
12
13            }
14            
15        }
16        return maxcount;
17        
18        }
19        
20    
21};