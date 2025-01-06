class Solution {
public:
    vector<int>nums = {1,2,3,4,5,6,7,8,9};
    vector<vector<int>>ans;
    void helper(int ind, int size, int target, vector<int>gg){
        if(target == 0){
            if(gg.size() == size)
                ans.push_back(gg);
            return;
        }
        if(gg.size() >= size || ind >= nums.size() || target < 0) return;
        gg.push_back(nums[ind]);
        helper(ind+1, size, target-nums[ind], gg);
        gg.pop_back();
        helper(ind+1, size, target, gg);
        return;
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        helper(0,k,n,{});
        return ans;
    }
};