class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int ans = (nums[nums.size()-1]-k) - (nums[0]+k);
        return (ans>0) ?ans:0 ;
    }
};

