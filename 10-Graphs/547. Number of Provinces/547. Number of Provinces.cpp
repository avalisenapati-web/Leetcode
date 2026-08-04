1class Solution {
2public:
3void dfs(vector<vector<int>>&adj,int node,vector<bool>&visited){
4    visited[node]=true;
5    for(int neighbors:adj[node]){
6        if(!visited[neighbors]){
7            dfs(adj,neighbors,visited);
8        }
9    }
10}
11
12   
13    int findCircleNum(vector<vector<int>>& isConnected) {
14         int n=isConnected.size();
15
16        vector<vector<int>>adj(n);
17       
18        for(int i=0;i<n;i++){
19            for(int j=0;j<n;j++){
20                if(isConnected[i][j]==1 && i!=j){
21                    adj[i].push_back(j);
22
23                }
24            }
25        }
26        vector<bool>visited(n,false);
27        int provinces=0;
28        for(int i=0;i<n;i++){
29            if(!visited[i]){
30                provinces++;
31                dfs(adj,i,visited);
32            }
33        }
34        return provinces;
35        
36        
37    }
38};