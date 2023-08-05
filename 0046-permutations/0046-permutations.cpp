class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int>temp;
    void perm(vector<int> nums , vector<bool> check){
        if(temp.size() == nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(!check[i]){
                check[i] = true;
                temp.push_back(nums[i]);
                perm(nums,check);

                temp.pop_back();
                check[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>check(nums.size() , false);
        perm(nums,check);
        return ans;
    }
};