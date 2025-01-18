class Solution {
public:
    bool helper(int i, vector<int>&dp, vector<int>&nums){
        if(i >= nums.size()-1){
            return true;
        }
        if(dp[i] != -1) return dp[i];
        int gg = min(i+nums[i] , (int)nums.size()-1);
        for(int j = i+1 ; j <= gg; j++){
            if(helper(j,dp,nums)){
                return dp[i] = true;
            }
        }
        return dp[i] = false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return helper(0,dp,nums);
    }
};