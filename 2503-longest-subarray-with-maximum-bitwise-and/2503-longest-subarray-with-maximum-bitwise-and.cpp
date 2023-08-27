class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len = 0;
        int ans = 1;
        int maax = *max_element(nums.begin() , nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == maax){
                len++;
            }
            else{
                ans = max(ans,len);
                len = 0;
            }
        }
        ans = max(ans,len);
        return ans;
    }
};