class Solution {
public:
    const int MOD = 1e9+7;
    int lengthAfterTransformations(string s, int t) {
        int cnt = 0;
        vector<int> gg(26, 0);
        for (auto i : s) {
            int f = i - 'a';
            gg[f]++;
        }
        while (t--) {
            int f = gg[0];
            gg[0] = 0;
            for (int i = 1; i < 26; i++) {
                swap(gg[i], f);
                gg[i] %= MOD;
            }
            gg[0] = (gg[0] + f) % MOD;
            gg[1] = (gg[1] + f) % MOD;
        }
        
        for (int i = 0; i < 26; i++) {
            cnt = (cnt + gg[i]) % MOD;
        }
        
        return cnt;
    }
};
