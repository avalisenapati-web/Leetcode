1class Solution {
2public:
3
4    void dfs(int city,vector<vector<int>>& isConnected,vector<bool>&visited){
5        visited[city]=true;
6        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++)
7        {
8            if (isConnected[city][neighbor] == 1 && !visited[neighbor])
9            {
10                dfs(neighbor, isConnected, visited);
11            }
12        }
13    }
14    int findCircleNum(vector<vector<int>>& isConnected) {
15        int n=isConnected.size();
16        vector<bool> visited(n,false);
17        int count=0;
18        for(int city=0;city<n;city++){
19            if(!visited[city]){
20                count++;
21                dfs(city,isConnected,visited);
22            }
23        }
24        return count;
25        
26    }
27};