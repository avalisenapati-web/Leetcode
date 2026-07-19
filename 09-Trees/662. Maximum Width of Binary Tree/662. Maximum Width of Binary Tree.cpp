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
14    int widthOfBinaryTree(TreeNode* root) {
15        if(root==nullptr){
16            return 0;
17        }
18        long long ans=0;
19        queue<pair<TreeNode*,long long>>q;
20        q.push({root,0});
21        while(!q.empty()){
22            int size=q.size();
23            long long minindex=q.front().second;
24            long long first,last;
25            for(int i=0;i<size;i++){
26                TreeNode* node=q.front().first;
27                long long  curr=q.front().second-minindex;
28                q.pop();
29
30                if(i==0) first=curr;
31                if(i==size-1) last=curr;
32
33                if(node->left)
34                    q.push({node->left,2*curr+1});
35                if(node->right)
36                    q.push({node->right,2*curr+2});
37            }
38            ans=max(ans,last-first+1);
39        }
40        return ans;
41        
42    }
43};