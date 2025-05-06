class Solution {
public:
    int f[1000001];
    int g[1000001];
    #define mod 1000000007  // Fix 1

    Solution(){
        preCompute();
    }

    void preCompute(){
        f[1] = 1;
        f[2] = 2;
        g[1] = 0;
        g[2] = 1;

        for(int i = 3 ; i <= 1000000 ; i++){  // Fix 3
            f[i] = (f[i-1] + f[i-2] + 2LL * g[i-1]) % mod;
            g[i] = (f[i-2] + g[i-1]) % mod;
        }
    }

    int numTilings(int n) {
        return f[n];  // Fix 2
    }
};
