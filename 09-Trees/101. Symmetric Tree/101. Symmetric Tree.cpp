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
14    bool mirror(TreeNode* left,TreeNode* right){
15        if(left==nullptr && right==nullptr){
16            return true;
17        }
18
19         if(left==nullptr || right==nullptr){
20            return false;
21        }
22        if(left->val!=right->val){
23            return false;
24        }
25        return mirror(left->left,right->right)&&mirror(left->right,right->left);
26
27    }
28    bool isSymmetric(TreeNode* root) {
29        if(root == nullptr)
30            return true;
31
32        return mirror(root->left, root->right);
33        
34    }
35};