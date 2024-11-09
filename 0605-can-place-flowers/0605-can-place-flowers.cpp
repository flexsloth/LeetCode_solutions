class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int cnt = 0;
        int ans = 0;
        f.insert(f.begin(),0);
        f.insert(f.begin(),1);
        f.push_back(0);
        f.push_back(1);
        for(int i = 1 ; i < f.size() ; i++){
            if(f[i] == 1){
                ans+= (cnt-1)/2;
                cnt = 0;
            }
            else cnt++;
        }
        if(ans >= n) return true;
        return false;
    }
};