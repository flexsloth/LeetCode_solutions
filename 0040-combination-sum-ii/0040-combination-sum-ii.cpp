class Solution {
public: 
    vector<vector<int>>ans;
    void helper(vector<int>& nums,int i, int k,vector<int>gg){
        if(k == 0){
            ans.push_back(gg);
            return;
        }
        if(k<0 || i >= nums.size()) return;

        gg.push_back(nums[i]);
        helper(nums,i+1,k-nums[i],gg);
        gg.pop_back();
        for(int j = i+1; j < nums.size() ; j++){
            if(nums[j] == nums[j-1]) continue;
            else{
                gg.push_back(nums[j]);
                helper(nums,j+1,k-nums[j],gg);
                gg.pop_back();
            }
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        helper(candidates,0,target,{});
        return ans;
    }
};



