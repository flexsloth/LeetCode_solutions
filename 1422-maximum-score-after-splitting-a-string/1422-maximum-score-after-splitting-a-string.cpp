class Solution {
public:
    int maxScore(string s) {
        int zero = 0;
        int one = count(s.begin() , s.end() , '1');
        int ans = -1;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == '0') zero++;
            if(s[i] == '1') one--;
            ans = max(ans,zero+one);
        }
        return ans;
    }
};