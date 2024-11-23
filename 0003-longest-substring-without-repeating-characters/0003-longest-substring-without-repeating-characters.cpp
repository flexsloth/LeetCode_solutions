class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        // if(s.size() == 0) return 0;
        int i = 0, j = 0, cnt = 0;
        while(i < s.size()){
            mp[s[i]]++;
            while(i < s.size() && j <= i && mp[s[i]] > 1){
                mp[s[j]]--;
                if(mp[s[j]] == 0) mp.erase(s[j]);
                j++;
            }
            cnt = max(cnt, i-j+1);
            i++;
        }
        return cnt;
    }
};