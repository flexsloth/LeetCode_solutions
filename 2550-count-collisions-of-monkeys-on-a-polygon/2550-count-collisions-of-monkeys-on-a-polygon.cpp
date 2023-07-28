class Solution {
public:
    int mod = 1e9+7;
    
    int monkeyMove(int s) {
        int a = 2,ans=1,n=s;
        while(n){
            if(n&1) ans = (ans *1LL * a )%mod;
            a = (a*1LL*a)%mod;
            n  >>= 1;
        }
        return (ans-2 + mod)%mod;
    }
};