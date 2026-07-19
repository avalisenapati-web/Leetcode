1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13        if(root==nullptr || root==p || root==q){
14            return root;
15        }
16        TreeNode* left=lowestCommonAncestor(root->left,p,q);
17        TreeNode* right=lowestCommonAncestor(root->right,p,q);
18        if(left==nullptr){
19            return right;
20        }else if(right==nullptr){
21            return left;
22        }else{
23            return root;
24        }
25
26        
27    }
28};