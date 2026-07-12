1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int n=nums.size();
5        int currprod=nums[0];
6        int maxprod=nums[0];
7        for(int i=1;i<n;i++){
8            currprod=max(nums[i],nums[i]*currprod);
9            maxprod=max(currprod,maxprod);
10        }
11        return maxprod;
12        
13    }
14};