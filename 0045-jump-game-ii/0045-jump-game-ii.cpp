class Solution {
public:
    int helper(int i, vector<int>&dp, vector<int>&nums){
        if(i >= nums.size()-1) return 0;
        if(dp[i] != -1) return dp[i];
        int gg = min(i+nums[i] , (int)nums.size()-1);
        int mini = 1e9;
        for(int j = i+1 ; j <= gg; j++){
            int val = 1+helper(j,dp,nums);
            mini = min(mini,val);
        }
        return dp[i] = mini;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return helper(0,dp,nums);
    }
};