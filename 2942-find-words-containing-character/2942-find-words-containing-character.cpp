class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        for(int i = 0 ; i < words.size() ; i++){
            string gg = words[i];
            if(count(gg.begin() , gg.end() , x)>0) ans.push_back(i);
        }
        return ans;
    }
};