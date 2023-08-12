class Solution {
public:
    using ll = long long;
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<ll,ll>s;
        ll sum = 0;
        ll maxi=0;
        for(ll i = 0 ; i < k ; i++) {s[nums[i]]++;sum+=nums[i];}
        if(s.size() == k && sum > maxi) maxi = sum;

        for(ll i = k ; i < nums.size() ; i++){
            sum+=nums[i];
            sum-=nums[i-k];

            if(s[nums[i-k]] == 1) s.erase(nums[i-k]);
            else    s[nums[i-k]]--;

            s[nums[i]]++;
            if(s.size() == k && sum>maxi) maxi = sum;
        }
        return maxi;
    }
};