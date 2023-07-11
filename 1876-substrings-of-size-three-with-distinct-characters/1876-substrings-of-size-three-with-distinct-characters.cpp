class Solution {
public:
    int countGoodSubstrings(string s) {
        //SLIDING WINDOW APPROACH
        if(s.size()<3) return 0;
        map<char,int>mp;
        mp[s[0]]++;
        mp[s[1]]++;
        int count=0;
        for(int i = 1 ; i < s.size()-1 ; i++){
            mp[s[i+1]]++;
            if(mp.size() == 3) count++;
            mp[s[i-1]]--;
            if(mp[s[i-1]]==0 ) mp.erase(s[i-1]);
        }
        return count;
    }
};