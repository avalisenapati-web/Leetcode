1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14   int maxi = INT_MIN;
15    int solve(TreeNode* root){
16        if(root==nullptr){
17            return 0;
18        }
19        int left=max(0,solve(root->left));
20        int right=max(0,solve(root->right));
21        maxi=max(maxi,left+right+root->val);
22        return root->val+max(left,right);
23
24    }
25    int maxPathSum(TreeNode* root) {
26        solve(root);
27        return maxi;
28
29        
30    }
31};