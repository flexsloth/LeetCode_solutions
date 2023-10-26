class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() <= k){
            reverse(begin(s) , end(s));
            return s;
        }
        int n = s.size();
        for(int i = 0 ; i < n ; i+=2*k){
            if(n-i <= k){
                reverse(s.begin()+i , s.end());
            }
            else{
                reverse(s.begin()+i , s.begin()+i+k);
            }
        }
        return s;
    }
};
