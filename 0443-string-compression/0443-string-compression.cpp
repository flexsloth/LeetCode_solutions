class Solution {
public:
    int compress(vector<char>& chars) {
        int cnt = 1;
        int j = 0;
        for(int i = 1 ; i < chars.size() ; i++){
            if(chars[i] != chars[i-1]){
                chars[j++] = chars[i-1];
                if(cnt > 1){
                    string gg = to_string(cnt);
                    for(auto c : gg){
                        chars[j++] = c;
                    }
                }
                cnt = 1;
            }
            else cnt++;
        }
        chars[j++] = chars.back();
        if(cnt > 1){
            string gg = to_string(cnt);
            for(auto c : gg){
                chars[j++] = c;
            }
        }
        return j;
    }
};