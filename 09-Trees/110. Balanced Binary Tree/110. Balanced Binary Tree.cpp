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
14    int height(TreeNode* root){
15        if(root==nullptr){
16            return 0;
17        }
18        int left=height(root->left);
19        if(left==-1)
20            return -1;
21        
22        int right=height(root->right);
23        if(right==-1)
24            return -1;
25
26
27        if(abs(right-left)>1){
28            return -1;
29        }
30        return 1+max(left,right);
31
32
33    }
34    bool isBalanced(TreeNode* root) {
35        return height(root)!=-1;
36
37
38        
39
40    }
41};