1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low=0;
5        int high=nums.size()-1;
6        while(low<=high){
7            int mid=low+(high-low)/2;
8            if(nums[mid]==target){
9                return mid;
10            }
11
12                if(nums[low]<=nums[mid]){
13                    if(target>=nums[low]&& target<nums[mid]){
14                    high=mid-1;
15                    }else{
16                        low=mid+1;
17                    }
18
19                }else{
20                    if(target>nums[mid] && target<=nums[high]){
21                        low=mid+1;
22                    }else{
23                        high=mid-1;
24                    }
25                
26            }
27        }
28        return -1;
29        
30    }
31};