class Solution {
public:
    const int mod = 1e9+7;
    int countOrders(int n) {
        long long ans = 1;
        for(int i=1;i<=n;i++){
            // ans = ans*i%mod;
            ans  = ans*i*(2*i-1)%mod;
        }
        ans%=mod;
        return ans;
    }
};