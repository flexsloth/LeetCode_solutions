class Solution {
public:
    int ans = 0;
    int helper(int n,vector<int>&dp){
        if(n == 0) return 1;
        if(n < 0) return 0;
        if(dp[n] != -1) return dp[n];
        return dp[n] = helper(n-1,dp)+helper(n-2,dp);
        // return ans;
    }
    int climbStairs(int n) {
        vector<int>dp(10000006,-1);
        return helper(n,dp);
    }
};