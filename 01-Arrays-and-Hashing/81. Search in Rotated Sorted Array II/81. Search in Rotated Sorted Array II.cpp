1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        int low=0;
5        int high=nums.size()-1;
6
7        while(low<=high){
8            int mid=low+(high-low)/2;
9
10            if(nums[mid]==target){
11                return true;
12            }
13            if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
14                low++;
15                high--;
16            }else if(nums[low]<=nums[mid]){
17                if(target>=nums[low]&& target<nums[mid]){
18                    high=mid-1;
19                }else{
20                    low=mid+1;
21                }
22            }else{
23                if(target>nums[mid]&& target<=nums[high]){
24                    low=mid+1;
25                }else{
26                    high=mid-1;
27                }
28            }
29        }
30        return false;
31
32        
33    }
34};