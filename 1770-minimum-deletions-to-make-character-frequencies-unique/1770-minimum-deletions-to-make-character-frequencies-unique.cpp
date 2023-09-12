class Solution {
public:
    int minDeletions(string s) {
        map<char,int>mp;
        for(auto i : s) mp[i]++;
        priority_queue<int>pq;
        for(auto &i : mp) pq.push(i.second);
        int count = 0;
        while(pq.size()>1){
            int gg = pq.top();pq.pop();
            if(pq.top() == gg && gg!=0){
                count++;
                pq.push(gg-1);
            }
        }
        return count;
    }
};