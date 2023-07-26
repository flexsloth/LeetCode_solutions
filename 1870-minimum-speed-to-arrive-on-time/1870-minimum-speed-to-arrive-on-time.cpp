class Solution {
public:

    bool yesOrNot(vector<int>dist, int mid, double hour){
        double tym=0;
        for(int i = 0  ; i < dist.size() ; i++){
            if(i == dist.size() - 1) tym += (double)dist[i]/(double)mid;
            else tym = tym + ceil((double)dist[i]/mid); 
        }
        return  tym <= hour;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) {
        int ans=-1;
        int start=0,end=1e8;
        while(start<=end){
        int mid = (start+end)/2;
        if(yesOrNot(dist,mid,hour)){
            ans = mid;
            end = mid-1;
        }
        else    start = mid+1;
        }
        return ans;
    }
};