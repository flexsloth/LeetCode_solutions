class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        for(auto i : gifts) pq.push(i);
        while(k--){
            long long gg = pq.top();
            pq.pop();
            gg = sqrtl(gg);
            pq.push(gg);
        }
        long long sum = 0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};