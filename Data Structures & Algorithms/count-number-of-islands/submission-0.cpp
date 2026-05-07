class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int islands = 0;

        for (int r = 0; r < n; r++){
            for (int c = 0; c < m; c++){
                if (grid[r][c] == '1'){
                   islands++;
                   dfs(r, c, grid);
                }
            }
        }
      
        return islands;
    }
    void dfs(int r, int c,  vector<vector<char>>& grid){
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '0') return;
        grid[r][c] = '0';
        dfs(r, c+1, grid);
        dfs(r,c -1 ,grid);
        dfs(r+1, c,grid);
        dfs(r-1 , c, grid);
        
    }
};
