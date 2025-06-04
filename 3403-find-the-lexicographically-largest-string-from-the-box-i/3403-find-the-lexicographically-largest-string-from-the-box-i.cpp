class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends == 1) return word;
        int n = word.size();
        string ans = "";
        char maxi = 'a';
        for(auto i : word)maxi = max(maxi,i); 
        int gg = word.size() - numFriends + 1;
        for(int i = 0 ; i < word.size() ; i++){
            if(word[i] == maxi){
                string f = min(word.substr(i) , word.substr(i,gg));
                if(f > ans){
                    ans = f;
                }
            }
        }
        return ans;
    }
};