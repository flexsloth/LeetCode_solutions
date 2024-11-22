class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>& nums,vector<bool>&vis, vector<int>temp){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(vis[i]!=true){
                temp.push_back(nums[i]);
                vis[i] = true;
                helper(nums,vis,temp);
                vis[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>vis(nums.size() , false);
        helper(nums,vis,{});
        return ans;
    }
};