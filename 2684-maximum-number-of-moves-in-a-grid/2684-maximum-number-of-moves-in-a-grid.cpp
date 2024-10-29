class Solution {
public:
    int row,col;
    int helper(int i,int j, int curr, vector<vector<int>>& grid, vector<vector<int>>&dp){
        if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j]<=curr) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int a=0,b=0,c=0;
        a = helper(i-1,j+1,grid[i][j],grid,dp);
        b = helper(i,j+1,grid[i][j],grid,dp);
        c = helper(i+1,j+1,grid[i][j],grid,dp);
        dp[i][j] = 1 + max({a,b,c});
        return dp[i][j];
    }
    int maxMoves(vector<vector<int>>& grid) {
        row = grid.size(),col = grid[0].size();
        vector<vector<int>>dp(row+1,vector<int>(col+1,-1));
        int ans = 0;
        for(int i = 0 ; i < row ; i++){
            ans = max(ans,helper(i,0,-1,grid,dp));
        }
        return ans-1;
    }
};