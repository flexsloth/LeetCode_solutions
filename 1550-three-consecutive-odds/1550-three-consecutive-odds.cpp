class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt = 0;
        for(auto i : arr){
            if(i%2 != 0)cnt++;
            if(cnt == 3) return true;
            if(i%2 == 0) cnt = 0;
        }
        return false;
    }
};