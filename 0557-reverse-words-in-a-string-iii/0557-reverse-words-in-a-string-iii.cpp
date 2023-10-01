class Solution {
public:
    string reverseWords(string s) {
        string gg="";
        string ans="";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ' '){
                reverse(gg.begin() , gg.end());
                ans+=gg;
                gg.clear();
                ans+=' ';
            }
            else gg+=s[i];
        }
        reverse(gg.begin() , gg.end());
        ans+=gg;
        return ans;
    }
};