1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int  low=0;
5        int high=nums.size()-1;
6        while(low<high){
7            int mid=low+(high-low)/2;
8
9
10            if(mid%2==1){
11                mid--;
12            }
13            if(nums[mid]==nums[mid+1]){
14                low=mid+2;
15            }else{
16                high=mid;
17            }
18        }
19        return nums[low];
20
21
22        
23    }
24};