class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        
        for(int i = 0 ; i < words.size() ; i++){
            string gg = words[i];
            
            int len = gg.size();
            for(int j = i + 1 ; j < words.size() ; j++){
                string ff = words[j];
                int len1 = ff.size();
                if(ff.substr(0,len) == gg && ff.substr(len1-len) == gg)
                    cnt++;
            }
        }
        return cnt;
    }
};