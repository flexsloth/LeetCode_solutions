class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = abs(nums[nums.size()-1] - nums[0]);
        for(int i = 0 ; i < nums.size()-2 ; i++){
            int gg = abs(nums[i] - nums[i+1]);
            maxi = max(maxi, gg);
        } 
        return maxi;
    }
};