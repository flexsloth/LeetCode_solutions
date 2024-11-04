class Solution {
public:
    string compressedString(string word) {
        int cnt = 1;
        string ans;
        int i;
        for(i = 1 ; i < word.size() ; i++){
            if(word[i]!=word[i-1]){
                ans+=(cnt)+'0';
                ans+=word[i-1];
                cnt = 1;
            }
            else if(cnt == 9){
                ans+=(cnt)+'0';
                ans+=word[i-1];
                cnt = 1;
            }
            else cnt++;
        }
        ans+=(cnt)+'0';
        ans+=word[i-1];
        return ans;
    }
};