class Solution {
public:
using ll = long long;
    const int mod = 1e9+7;
    ll binexp(ll a, ll b)
     {
          ll base = 1;
          a %= mod;
          while (b > 0)
          {
               if (b & 1)
                    base = base * a % mod;
               a = a * a % mod;
               b >>= 1;
          }
          base = base % mod;
          return base;
     }
    int countGoodNumbers(long long n) {
        ll odd = n/2;
        ll even = n/2+n%2;
        return binexp(4,odd)%mod*1LL*binexp(5,even)%mod;
    }
};