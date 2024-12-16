class Solution {
public:
    set<vector<int>>s;
    void helper(vector<int>& nums,int i, int k,vector<int>gg){
        if(k == 0){
            s.insert(gg);
            return;
        }
        if(k < 0 || i >= nums.size()) return;
        if(k >= nums[i]){
            gg.push_back(nums[i]);
            helper(nums,i,k-nums[i],gg);
            gg.pop_back();
        }
        helper(nums,i+1,k,gg);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        helper(candidates,0,target,{});
        vector<vector<int>>ans;
        for(auto i : s){
            vector<int>gg = i;
            ans.push_back(gg);
        }
        return ans;
    }
};