class Solution {
public:
    bool helper(int i, int sum, int target, vector<int>&nums, vector<vector<int>>&dp){
        if(i >= nums.size()) return false;
        if(sum == target) return true;
        if(dp[i][sum] != -1) return dp[i][sum];
        bool take = false, nottake = false;
        take = helper(i+1, sum+nums[i], target, nums,dp);
        nottake = helper(i+1, sum, target,nums,dp);
        dp[i][sum] = take | nottake;
        return dp[i][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums){
            sum+=i;
        }
        if(sum%2 != 0) return false;
        vector<vector<int>>dp(nums.size(),vector<int>(sum+1,-1));
        return helper(0,0,sum/2,nums,dp);
    }
};