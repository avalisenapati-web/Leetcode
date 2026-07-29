1class Solution {
2public:
3int firstoccur(vector<int>&nums,int target){
4    int low=0;
5    int high=nums.size()-1;
6    int ans=-1;
7
8    while(low<=high){
9        int mid=low+(high-low)/2;
10        if(nums[mid]==target){
11            ans=mid;
12            high=mid-1;
13        }else if(nums[mid]<target){
14            low=mid+1;
15        }else{
16            high=mid-1;
17        }
18
19
20    }
21    return ans;
22
23
24
25}
26int lastoccur(vector<int>&nums,int target){
27    int low=0;
28    int high=nums.size()-1;
29    int ans=-1;
30    while(low<=high){
31        int mid=low+(high-low)/2;
32
33        if(nums[mid]==target){
34            ans=mid;
35            low=mid+1;
36        }else if(nums[mid]<target){
37            low=mid+1;
38        }else{
39            high=mid-1;
40        }
41    }
42    return ans;
43
44
45}
46    vector<int> searchRange(vector<int>& nums, int target) {
47        
48        int first=firstoccur(nums,target);
49        int last=lastoccur(nums,target);
50        return {first,last};
51    }
52};