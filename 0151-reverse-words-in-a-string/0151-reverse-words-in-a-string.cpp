class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string ans = "";
        string gg = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ' '){
                gg+=s[i];
                
            }
            else{
                if(!gg.empty()){
                    // cout<<gg<<endl;
                    ans = gg+' '+ans;
                    cout<<ans<<endl;
                }
                gg = "";
            }
        }
        if(ans.back() == ' ') ans.pop_back();
        return ans;
    }
};