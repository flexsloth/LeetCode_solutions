class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>>vis(n,vector<int>(m,0)) ;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                
            }
        }
        int ans = 0;
        int row[] = {-1,0,1,0};
        int col[] = {0,1,0,-1};
        while(!q.empty()){
            int i,j,time;
            auto gg = q.front();
            q.pop();
            i = gg.first.first;
            j = gg.first.second;
            time = gg.second;

            for(int k = 0 ; k < 4 ; k++){
                int next_i = i + row[k];
                int next_j = j + col[k];
                if(next_i >= 0 && next_i < n && next_j >= 0 && next_j < m && !vis[next_i][next_j]){
                    if(grid[next_i][next_j] == 1){
                        q.push({{next_i, next_j}, time+1});
                        ans = time+1;
                        
                        vis[next_i][next_j] = 1;
                    }
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1 && vis[i][j] != 1)
                    return -1;
            }
        }
        
        return ans;

    }
};