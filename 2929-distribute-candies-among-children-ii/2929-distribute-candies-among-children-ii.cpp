class Solution {
public:
    using ll = long long int;
    ll gg(ll n){
        return n*(n-1)/2;
    }
    long long distributeCandies(int n, int limit) {
        if (n > 3 * limit)
            return 0;
        ll ans = gg(n + 2);
        if (n > limit) {
            ans -= 3 * gg(n - limit + 1);
        }
        if (n - 2 >= 2 * limit) {
            ans += 3 * gg(n - 2 * limit);
        }
        return ans;
    }
};