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
14TreeNode* prev=nullptr;
15    void flatten(TreeNode* root) {
16        
17        if(root==nullptr)
18            return;
19        flatten(root->right);
20        flatten(root->left);
21        root->right=prev;
22        root->left=nullptr;
23        prev=root;
24    }
25};