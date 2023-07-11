class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt = 0;
        long long sum = 0;
        for(int i=0;i<arr.size();i++){
            if(i-k>=0 and (sum/k)>=threshold){
                cnt++;
                sum-=arr[i-k];
            }else if(i-k>=0) sum-=arr[i-k];
            sum+=arr[i];
        }
        if(sum/k>=threshold) cnt++;
        return cnt;
    }
};