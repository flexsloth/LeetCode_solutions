class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int cnt = 0;
        set<string>st;
        vector<string>ans;
        for(int i = 0 ; i < words.size() ; i++){
            string gg = words[i];
            for(int j = 0 ; j < words.size() ; j++){
                int len = gg.size();
                string f = words[j];
                if(len > f.size() || j == i) continue;
                for(int k = 0 ; k < f.size() - len + 1 ; k++){
                    string a = f.substr(k,len);
                    if(a == gg){
                        st.insert(gg);
                        break;
                    }
                }
            }
        }
        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};