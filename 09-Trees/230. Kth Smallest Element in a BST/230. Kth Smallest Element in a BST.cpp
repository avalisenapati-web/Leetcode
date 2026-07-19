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
14int count=0;
15int ans=-1;
16    void inorder(TreeNode* root,int k){
17        if(root==nullptr){
18            return;
19        }
20        inorder(root->left,k);
21        count++;
22        if(count==k){
23            ans=root->val;
24            return;
25        }
26        inorder(root->right, k);
27    }
28    int kthSmallest(TreeNode* root, int k) {
29        inorder(root,k);
30        return ans;
31        
32    }
33};