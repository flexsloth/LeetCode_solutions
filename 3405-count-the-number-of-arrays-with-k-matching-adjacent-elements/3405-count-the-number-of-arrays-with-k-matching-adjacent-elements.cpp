class Solution {
public:
    #define ll long long
    #define mod 1000000007
    #define len 100005
    vector<ll> v, inv;
    void pre(int N) {
        v.resize(N + 1, 1);   
        inv.resize(N + 1, 1);
        for (int i = 2 ; i <= N ; i++) {
            v[i] = v[i - 1] * i % mod;
        }
        inv[N] = modinv(v[N]);
        for (int i = N - 1; i >= 0; i--) {
            inv[i] = inv[i + 1] * (i + 1) % mod;
        }
    }
    ll nCr(ll n, ll r) {
        if (r > n)return 0;
        if (r == 0) return 1;
        return v[n] * inv[r] % mod * inv[n - r] % mod;
    }
    ll binexp(ll x, ll y) {
        ll gg = 1;
        x = x % mod;
        while (y > 0) {
            if (y & 1) {
                gg = (gg * x) % mod;
            }
            y = y >> 1;
            x = (x * x) % mod;
        }
            return gg;
    }
    ll modinv(ll x){return binexp(x, mod - 2);}

    int countGoodArrays(int n, int m, int k) {
        pre(len);
        if (k >= n) {
            return 0;
        }
        ll kyc = nCr(n - 1, k);
        ll raim = binexp(m - 1, n - k - 1);
        ll ans = kyc * m % mod;
        ans = ans * raim % mod;
        return (int)ans;
    }
};