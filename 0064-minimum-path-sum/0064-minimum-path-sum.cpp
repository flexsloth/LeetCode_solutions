class Solution {
public:
int row,col;
    int helper(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(i == row-1 && j == col-1) return grid[i][j];
        if(i < 0 || j < 0 || i >= row || j >= col) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int a = grid[i][j] + helper(i+1,j,grid,dp);
        int b = grid[i][j] + helper(i,j+1,grid,dp);
        return dp[i][j] = min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        row = grid.size() , col = grid[0].size();
        vector<vector<int>>dp(row, vector<int>(col,-1));
        return helper(0,0,grid,dp);
    }
};