1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        vector<vector<int>>adj(numCourses);
5        for(auto it:prerequisites){
6            int course=it[0];
7            int preq=it[1];
8            adj[preq].push_back(course);
9        }
10        vector<int>indegree(numCourses,0);
11        for(int i=0;i<numCourses;i++){
12            for(auto neighbor:adj[i]){
13                indegree[neighbor]++;
14            }
15        }
16        queue<int>q;
17        for(int i=0;i<numCourses;i++){
18            if(indegree[i]==0){
19                q.push(i);
20            }
21        }
22        int count=0;
23        while(!q.empty()){
24            int node=q.front();
25            q.pop();
26            count++;
27            for(auto neighbor:adj[node]){
28                indegree[neighbor]--;
29                if(indegree[neighbor]==0){
30                    q.push(neighbor);
31                }
32            }
33        }
34        return count==numCourses;
35
36        
37    }
38};