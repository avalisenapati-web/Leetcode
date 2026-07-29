1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int low=0;
5        int high=nums.size()-1;
6        while(low<high){
7            int mid=low+(high-low)/2;
8
9            if(nums[mid]<nums[mid+1]){
10                low=mid+1;
11            }else{
12                high=mid;
13            }
14            
15        }
16        return low;
17        
18    }
19};