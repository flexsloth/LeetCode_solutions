class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        int k = 0;
        int ans;
        for(int i = 0 ; i < m ; i++){
            int count = 0;k=0;
            for(int j = i ; j < i+n ; j++){
                if(haystack[j] == needle[k]){
                    count++;
                    k++;
                }
                else break;
            }
            if(count == n){
                return i;
            }
        }
        return -1;
    }
};