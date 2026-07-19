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
14    TreeNode* searchBST(TreeNode* root, int val) {
15        if(root==nullptr|| root->val==val){
16            return root;
17        }else if(val < root->val){
18          return searchBST(root->left,val);
19        }else{
20            return  searchBST(root->right,val);
21        }
22        
23    }
24    
25};