class Solution {
public:
    bool canWinNim(int n) {
        if(n<4) return 1;
        else if(n%4==0) return 0;
        else return 1;
        
    }
};