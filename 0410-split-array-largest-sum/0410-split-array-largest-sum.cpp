
class Solution {
public:
    using ll = long long int;
    bool isPossible(vector<int>&nums,ll mid,ll k){
        ll csum =nums[0];
        ll cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(csum+nums[i]<=mid)csum+=nums[i];
            else{
                csum = nums[i];
                cnt++;
            }
        }
        return cnt>k;
    }
    int splitArray(vector<int>& nums, int k) {
        //sort(begin(nums),end(nums));
        ll low = *max_element(begin(nums),end(nums));
        ll high = accumulate(begin(nums),end(nums),0);
        int ans = low;
        while(low<=high){
            ll mid = (low+high)/2;
            if(isPossible(nums,mid,k)){
            low = mid+1;
            }else {
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};
