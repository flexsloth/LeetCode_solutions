class Solution {
public:
    int maximumCount(vector<int>& nums) {   
        int n = nums.size();
        int negStart = lower_bound(begin(nums), end(nums), 0) - nums.begin();
        int posBegin = upper_bound(begin(nums), end(nums), 0) - nums.begin();        
        return max(negStart, (n - 1 - posBegin + 1));
    }
};