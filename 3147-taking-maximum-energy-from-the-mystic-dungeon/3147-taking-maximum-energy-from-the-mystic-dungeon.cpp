class Solution {
public:
    int maximumEnergy(vector<int>& gg, int k) {
        int maxi = INT_MIN;
        map<int,int>mp;
        for(int i = gg.size()-1 ; i >= 0 ; i--){
            mp[i] += gg[i];
            int rara = i + k;
            if(rara < gg.size()) mp[i] = mp[i] + mp[rara];
        }
        for(auto i : mp){
            maxi = max(maxi,i.second);
        }
        return maxi;
    }
};