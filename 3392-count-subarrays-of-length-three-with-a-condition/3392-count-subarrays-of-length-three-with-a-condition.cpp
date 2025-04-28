class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0 ; i <= nums.size() - 3 ; i++){
            if(2*(nums[i]+nums[i+2]) == nums[i+1]) cnt++;
        }
        return cnt;
    }
};