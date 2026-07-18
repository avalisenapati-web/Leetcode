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
14    int diameter=0;
15    int height(TreeNode* root){
16        if(root==nullptr){
17            return 0;
18        }
19        int left=height(root->left);
20        int right=height(root->right);
21        diameter=max(diameter,left+right);
22        return 1+max(left,right);
23    }
24    int diameterOfBinaryTree(TreeNode* root) {
25        height(root);
26        return diameter;
27
28        
29    }
30};