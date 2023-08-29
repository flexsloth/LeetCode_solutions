class Solution {
public:
    int bestClosingTime(string cs) {
        int pnlty = 0;
        int gg = 0;
        int ans = -1;
        for(int i = 0 ; i < cs.size() ; i++){
            if(cs[i] == 'Y'){
                gg++;
            }
            else if(cs[i] == 'N'){
                gg--;
            }
            if(gg>pnlty){
                ans = i;
                pnlty = gg;
            }
        }
    // if(ans == 0) return 0;
    return ans+1;
    }
};