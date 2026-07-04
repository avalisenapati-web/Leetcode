1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n=nums.size();
5        int totalsum=n*(n+1)/2;
6        int arraysum=0;
7        for(int x: nums){
8            arraysum+=x;
9        }
10        return totalsum-arraysum;
11        
12    }
13};