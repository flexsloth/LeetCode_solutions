class Solution {
public: 
    int waysToSplitArray(vector<int>& nums) {
        long long n = nums.size();
        vector<long long>pref(n,0),suff(n,0);
        pref[0] = nums[0];
        suff[n-1] = nums[n-1];
        for(long long i = 1 ; i < n ; i++) pref[i] = nums[i] + pref[i-1];
        for(long long i = n - 2 ; i >= 0 ; i--) suff[i] = nums[i] + suff[i+1];
        long long cnt = 0;
        for(long long i = 0 ; i < n - 1 ; i++){
            if(pref[i] >= suff[i+1])cnt++;
        }
        return cnt;
    }
};