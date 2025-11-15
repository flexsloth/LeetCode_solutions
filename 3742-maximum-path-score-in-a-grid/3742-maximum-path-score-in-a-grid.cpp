class Solution {
public:
    int row,col;
    int helper(int i, int j, int k, int cost, vector<vector<int>>&grid,vector<vector<vector<int>>>&dp){
        if(i == row-1 && j == col-1 ){
            if(grid[i][j] != 0) cost++;
            if(cost <= k)
                return grid[i][j];
            else return INT_MIN;
        }
        if(i < 0 || j < 0 || i >= row || j >= col || cost > k){
            return INT_MIN;
        }

        if(grid[i][j] != 0) cost = cost + 1;
        if(cost > k) return INT_MIN;
        if(dp[i][j][cost] != -1) return dp[i][j][cost];

        int take = grid[i][j] + helper(i+1,j,k,cost,grid,dp);
        int nottake = grid[i][j] + helper(i,j+1,k,cost, grid,dp);
        return dp[i][j][cost] = max(take,nottake);
    }
    int maxPathScore(vector<vector<int>>& grid, int k) {
        row = grid.size();
        col = grid[0].size();
        vector<vector<vector<int>>>dp(row, vector<vector<int>>(col,vector<int>(k+1,-1)));
        auto gg = helper(0,0,k,0,grid,dp);
        if(gg < 0) return -1;
        return gg;
    }
};