class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int maxi=0;
        for(int i = 0 ; i <= blocks.size()-k ; i++){
            string s = blocks.substr(i,k);
            int count = 0;
            for( int i = 0 ; i < s.size() ; i++){
                if( s[i] == 'B')
                    count++;
            }
            maxi = max(maxi, count);
        }
        int ans =k-maxi;
        return ans;
    }
};