class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k)  {
        vector<int>maxdiff;
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]-k]++;
            mp[nums[i]+k+1]--;
        }
        int ret=0,tt=0;
        for(auto x : mp){
            tt += x.second;
            ret = max(ret,tt);
        }
        return ret;
    }
};
