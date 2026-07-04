1class Solution {
2public:
3    vector<vector<pair<int,int>>> adj;
4    vector<bool> vis;
5    int ans;
6
7    void dfs(int node) {
8        vis[node] = true;
9
10        for (auto &it : adj[node]) {
11            int next = it.first;
12            int dist = it.second;
13
14            ans = min(ans, dist);
15
16            if (!vis[next]) {
17                dfs(next);
18            }
19        }
20    }
21
22    int minScore(int n, vector<vector<int>>& roads) {
23        adj.assign(n + 1, {});
24        vis.assign(n + 1, false);
25        ans = INT_MAX;
26
27        for (auto &road : roads) {
28            int u = road[0];
29            int v = road[1];
30            int d = road[2];
31
32            adj[u].push_back({v, d});
33            adj[v].push_back({u, d});
34        }
35
36        dfs(1);
37
38        return ans;
39    }
40};