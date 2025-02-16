class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnt = 1;
        int maxi = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]<=nums[i-1]){
                maxi = max(maxi,cnt);
                cnt = 1;
                
            }
            else
                cnt++;
        }
        maxi = max(maxi,cnt);
        cnt=1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i]>=nums[i-1]){
                maxi = max(maxi,cnt);
                cnt = 1;
            }
            else
                cnt++;
        }
        maxi = max(maxi,cnt);

        return maxi;
    }
};