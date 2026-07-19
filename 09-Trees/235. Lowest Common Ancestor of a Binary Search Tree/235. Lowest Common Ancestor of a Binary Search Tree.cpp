1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
14        if(root==nullptr){
15            return nullptr;
16        }
17        if(p->val<root->val && q->val<root->val){
18            return lowestCommonAncestor(root->left,p,q);
19        }else if(p->val>root->val && q->val>root->val){
20            return lowestCommonAncestor(root->right,p,q);
21        }else{
22            return root;
23        }
24        
25        
26    }
27};