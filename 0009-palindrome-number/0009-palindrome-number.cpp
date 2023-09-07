class Solution {
public:
    bool isPalindrome(int x) {
        string s= to_string(x);
        int n= s.size();
        int i=0;
        for(int j=n-1; j>=n/2; j--){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
            }
        }
        return true;
    }
};