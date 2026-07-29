1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        
5        int farthest=0;
6        for(int i=0;i<nums.size();i++){
7            if(i>farthest){
8                return false;
9            }
10            farthest=max(farthest,i+nums[i]);
11        }
12        return true;
13    }
14};