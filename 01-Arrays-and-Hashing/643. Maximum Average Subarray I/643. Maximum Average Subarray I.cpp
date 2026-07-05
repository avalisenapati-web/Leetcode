1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int sum=0;
5        for(int i=0;i<k;i++){
6            sum+=nums[i];
7        }
8        int maxsum=sum;
9        for(int i=k;i<nums.size();i++){
10            sum=sum+nums[i]-nums[i-k];
11            maxsum=max(maxsum,sum);
12        }
13        return (double)maxsum/k;
14        
15        
16        
17    }
18};