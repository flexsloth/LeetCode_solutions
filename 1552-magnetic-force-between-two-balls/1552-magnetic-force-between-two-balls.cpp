class Solution {
public:
    bool helper(vector<int>&v, int n, int mid){
        int prev = v[0];
        n--;
        for(int i = 1 ; i < v.size() ; i++){
            if(n<=0){
                break;
            }
            if(v[i]-prev >= mid){
                prev = v[i];
                n--;
            }
        }
        if(n) return false;
        return true;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int i = 0;
        int j = position.back() - position.front();
        int ans = -1;
        while(i <= j){
            int mid = (i+j)/2;
            if(helper(position, m, mid)){
                i = mid+1;
                ans = mid;
            }
            else j = mid-1;
        }
        return ans;
    }
};