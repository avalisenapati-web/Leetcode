1class Solution {
2
3public:
4    int findDuplicate(vector<int>& nums) {
5        int slow = nums[0];
6        int fast = nums[0];
7
8        // Step 1: Find the meeting point
9        do {
10            slow = nums[slow];
11            fast = nums[nums[fast]];
12        } while (slow != fast);
13
14        // Step 2: Find the entrance to the cycle
15        slow = nums[0];
16
17        while (slow != fast) {
18            slow = nums[slow];
19            fast = nums[fast];
20        }
21
22        return slow;
23    }
24};
25        
26    
27