class Solution {
public:
    int minimumLength(string s) {
        map<char,vector<int>>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]].push_back(i);
        }
        int cnt = 0;
        for(auto i : mp){
            if(i.second.size() > 2){
                int gg = i.second.size();
                if(gg%2 == 0){
                    cnt += (gg-2);
                }
                else{
                    cnt += (gg-1);
                }
            }
        }
        return s.size()-cnt;
    }
};