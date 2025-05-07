class Solution {
public:
    int row[4] = {-1, 0, 1, 0};
    int col[4] = {0, 1, 0, -1};
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();
        vector<vector<int>> dist(n,vector<int>(m,2e9+7));
        dist[0].front() = 0;
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({0,0,0});
        while(!pq.empty()){
            auto gg = pq.top();
            pq.pop();
            for(int i = 0 ; i < 4 ; i++){
                int time = gg[0];
                int roww = gg[1] + row[i];
                int coll = gg[2] + col[i];
                if(roww >= 0 && roww < n && coll >= 0 && coll < m){
                    int ggtime = max(time,moveTime[roww][coll])+1;
                    if(ggtime < dist[roww][coll]){
                        dist[roww][coll] = ggtime;
                        pq.push({ggtime,roww,coll});
                    }
                }
            }
        }
        return dist[n-1][m-1];
    }
};