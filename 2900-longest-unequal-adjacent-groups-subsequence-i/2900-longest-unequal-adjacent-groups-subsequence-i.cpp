class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string> yans;
        vector<int> stut;
         stut.push_back(0);
        int ind = 0;
    for (int i = 1; i < n; i++)
        if (groups[ind] != groups[i]) {
            ind = i;
            stut.push_back(i);
        }
        
    for (int i : stut)
        yans.push_back(words[i]); 
        return yans;
    }
};