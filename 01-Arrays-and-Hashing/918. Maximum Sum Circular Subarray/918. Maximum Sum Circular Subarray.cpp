1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& nums) {
4        int n=nums.size();
5        int totalsum=nums[0];
6        int currmax=nums[0];
7        int maxsum=nums[0];
8        int currmin=nums[0];
9        int minsum=nums[0];
10        for(int i=1;i<n;i++){
11            totalsum+=nums[i];
12
13            currmax=max(nums[i],currmax+nums[i]);
14            maxsum=max(currmax,maxsum);
15
16            currmin=min(nums[i],nums[i]+currmin);
17            minsum=min(currmin,minsum);
18            
19        }
20        if(maxsum<0){
21            return maxsum;
22        }
23        return max(maxsum,totalsum-minsum);
24        
25    }
26};