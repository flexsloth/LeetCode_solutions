class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums)sum+=i;
        int gg = nums.size();
        int msum = ((gg)*(gg+1))/2;
        return msum-sum;
    }
};