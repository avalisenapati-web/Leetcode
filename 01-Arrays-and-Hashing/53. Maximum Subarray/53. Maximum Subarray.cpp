1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int n=nums.size();
5        
6        int currsum=nums[0];
7        int maxsum=nums[0];
8        for(int i=1;i<n;i++){
9            currsum=max(nums[i],currsum+nums[i]);
10            maxsum=max(currsum,maxsum);
11        }
12        return maxsum;
13    }
14};