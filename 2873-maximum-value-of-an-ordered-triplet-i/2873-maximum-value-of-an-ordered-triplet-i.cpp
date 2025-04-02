class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       
        long long int ans = INT_MIN;
        for(long long int i = 0 ; i < nums.size() ; i++){
            for(long long int j = i+1 ; j < nums.size() ; j++){
                for(long long int k = j+1 ; k < nums.size(); k++){
                    long long int gg = (nums[i] - nums[j])*1LL*nums[k];
                    ans = max(ans,gg);
                }
            }
        }
        if(ans>0) return ans;
        return 0;
    }
};