class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        for(int i = 0 ; i <= m-n ; i++){
            string gg = haystack.substr(i,n);
            if(gg == needle) return i;
        }
        return -1;
    }
};