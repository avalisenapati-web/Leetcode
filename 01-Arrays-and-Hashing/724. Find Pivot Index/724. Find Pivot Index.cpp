1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int total=0;
5        for(int num:nums){
6            total+=num;
7        }
8        int leftsum=0;
9        for(int i=0;i<nums.size();i++ ){
10            int rightsum=total-leftsum-nums[i];
11            if(leftsum==rightsum){
12                return i;
13            }
14            leftsum+=nums[i];
15        }
16        return -1;
17        
18    }
19};