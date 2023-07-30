class Solution {
public:
    bool isHappy(int n) {
        int a = 8;
        while(a--){
            if(n == 1) return true;
            int a=n,gg=0;
            while(n){
                 gg+=pow(n%10,2);
                n/=10;
            }
            n=gg;
        }
        return false;
    }
};