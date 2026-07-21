1class Solution {
2public:
3void dfs(vector<vector<int>>& image,int row,int col,int oldcolor,int newcolor){
4    int m=image.size();
5    int n=image[0].size();
6    if(row<0 ||row>=m||col<0|| col>=n){
7        return;
8    }
9    if(image[row][col]!=oldcolor){
10        return;
11    }
12    image[row][col]=newcolor;
13     dfs(image, row - 1, col, oldcolor, newcolor); // Up
14        dfs(image, row + 1, col, oldcolor, newcolor); // Down
15        dfs(image, row, col - 1, oldcolor, newcolor); // Left
16        dfs(image, row, col + 1, oldcolor, newcolor); // Right
17}
18    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
19        int oldcolor=image[sr][sc];
20        if(oldcolor==color){
21            return image;
22
23        }
24        dfs(image,sr,sc,oldcolor,color);
25       return image;
26
27        
28        
29    }
30};