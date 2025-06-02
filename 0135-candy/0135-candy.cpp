class Solution {
public:
    int candy(vector<int>& r) {
        int cnt = 0, curr = 0;
        int n = r.size();
        for(int i = 0 ; i < r.size()-1 ; i++){
            if(i == 0){
                if(r[0] <= r[1]) {cnt++;curr = 1;}
                else {cnt+=2;curr = 2;}
            }
            else if(i == n-1){
                if(r[n-1]<=r[n-2])
                    cnt += 1;
                else cnt+=curr+1;
            }
            else{
                if(r[i] > r[i-1] || r[i] > r[i+1]){
                    curr++;
                    cnt+=curr;
                }
                else if(r[i] < r[i-1] && r[i] < r[i+1]){
                    curr = 1;
                    cnt++;
                }
                else if(r[i] == r[i-1] && r[i] > r[i+1]){
                    curr=2;
                    cnt+=curr;
                }
                else curr++;
            }
        }
        return cnt;
    }
};