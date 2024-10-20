class Solution {
public:
    map<int,int>mp;
    bool check(int k) {
        for (auto i : mp) {
            if (i.second >= k) return true;
        }
        return false;
    }
    int numberOfSubstrings(string s, int k) {
        int i = 0,j=0;
        int n = s.size();
        int ans = 0;
        while(i < s.size()){
            mp[s[i]]++;
            while(check(k)){
                ans+=(n-i);
                mp[s[j]]--;
                if(mp[s[j]] == 0) mp.erase(s[j]);
                j++;
            }
            i++;
        }
        return ans;
    }
};