1class Solution {
2public:
3    void dfs(vector<vector<char>>&grid,int row,int col){
4        if(row<0 || row>=grid.size() || col<0 ||col>=grid[0].size()){
5            return;
6        }
7        if(grid[row][col]=='0'){
8            return;
9        }
10        grid[row][col]='0';
11
12        dfs(grid,row+1,col);
13        dfs(grid,row-1,col);
14        dfs(grid,row,col+1);
15        dfs(grid,row,col-1);
16    }
17    int numIslands(vector<vector<char>>& grid) {
18        
19        int island=0;
20        for(int i=0;i<grid.size();i++){
21            for(int j=0;j<grid[0].size();j++){
22                if(grid[i][j]=='1'){
23                    island++;
24                    dfs(grid,i,j);
25                }
26            }
27        }
28        return island;
29
30    }
31};