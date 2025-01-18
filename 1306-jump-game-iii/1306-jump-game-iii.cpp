class Solution {
public:
    bool helper(int ind, vector<int>& arr, vector<int>&dp, vector<int>&vis){
        if(ind >= arr.size() || ind < 0 || vis[ind] != -1) return false;
        if(arr[ind] == 0) return true;
        if(dp[ind] != -1) return dp[ind];
 
        vis[ind] = 1;
        dp[ind] = helper(ind+arr[ind],arr,dp,vis) || helper(ind-arr[ind] , arr, dp,vis);
        return dp[ind];
    }
    bool canReach(vector<int>& arr, int start) {
        vector<int>dp(arr.size() , -1);
        vector<int>vis(arr.size(),-1);
        return helper(start,arr,dp,vis);
    }
};