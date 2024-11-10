class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int gg = INT_MAX;
        int gg1 = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] <= gg) gg = nums[i];
            else if(nums[i] <= gg1) gg1 = nums[i];
            else return true;
        }
        return false;
    }
};