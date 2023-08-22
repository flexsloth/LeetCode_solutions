class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n > 0){
            n--;
            int m = n % 26;
            n /= 26;
            ans += 'A' + m;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};