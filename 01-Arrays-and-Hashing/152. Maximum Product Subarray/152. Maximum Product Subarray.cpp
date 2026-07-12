1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4       int n=nums.size();
5       int maxprod=nums[0];
6       int minprod=nums[0];
7       int ans=nums[0];
8       for(int i=1;i<n;i++){
9        if(nums[i]<0){
10            swap(maxprod,minprod);
11
12        }
13        maxprod=max(nums[i],maxprod*nums[i]);
14        minprod=min(nums[i],minprod*nums[i]);
15        ans=max(maxprod,ans);
16
17       }
18    return ans;
19    }
20};