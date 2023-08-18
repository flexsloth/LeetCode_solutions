class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);
        vector<vector<int>>visited(n,vector<int>(n,0));

        for(auto &road:roads){
            visited[road[0]][road[1]] = 1;
            visited[road[1]][road[0]] = 1;
            degree[road[0]]++;
            degree[road[1]]++;
        }
        int ans=0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                ans = max(ans , degree[i] + degree[j] - visited[i][j]);
            }
        }
        return ans;
    }
};