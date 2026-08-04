1class Solution {
2public:
3    void dfs(vector<vector<int>>&adj,int node,vector<bool>&visited){
4        visited[node]=true;
5
6        for(int neighbors:adj[node]){
7            if(!visited[neighbors]){
8                dfs(adj,neighbors,visited);
9            }
10        }
11    }
12    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
13
14        vector<vector<int>> adj(n);
15
16        for(auto edge:edges){
17            int u=edge[0];
18            int v=edge[1];
19
20            adj[u].push_back(v);
21             adj[v].push_back(u);
22        }
23        vector<bool>visited(n,false);
24        dfs(adj,source,visited);
25
26        return visited[destination];
27        
28    }
29};