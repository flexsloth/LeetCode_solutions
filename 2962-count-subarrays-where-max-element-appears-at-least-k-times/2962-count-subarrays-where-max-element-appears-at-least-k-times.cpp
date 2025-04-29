class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long j = 0 , cnt = 0 , t = *max_element(nums.begin() , nums.end()),ans = 0,n = nums.size();
        map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
            while(mp[t]>=k){
                ans = ans + (n-i);
                mp[nums[j]]--;
                if(mp[nums[j]] == 0) mp.erase(nums[j]);
                j++;
            }
        }
        return ans;
    }
};