class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int cnt=-1,ans;
        for(auto x:mp){
            if(x.second>cnt){
                ans = x.first;
                cnt = x.second;
            }
        }        
        return ans;
    }
};