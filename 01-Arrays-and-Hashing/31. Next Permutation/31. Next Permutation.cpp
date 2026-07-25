1class Solution {
2public:
3    void nextPermutation(vector<int>& nums) {
4        int n=nums.size();
5        int i=n-2;
6        while(i>=0 && nums[i]>=nums[i+1]){
7            i--;
8        }
9        if(i>=0){
10            int j=n-1;
11            while(nums[j]<=nums[i]){
12                j--;
13            }
14            swap(nums[i],nums[j]);
15        }
16        reverse(nums.begin()+i+1,nums.end());
17
18
19
20        
21    }
22};