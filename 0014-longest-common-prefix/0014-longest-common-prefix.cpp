class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        if(strs.size() == 0) {
            return s;
        }
        for(int i = 0; i < strs[0].size(); i++) {
            string gg = strs[0];
            char c = gg[i];
            // char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++) {
                if(c != strs[j][i]) {
                    return s;
                }
            }
            s += c;//s="fl";
        }
        return s;
    }
}; 
