class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        for(auto i : pre){
            adj[i[1]].push_back(i[0]);
        }
        vector<int>indegree(n);
        for(auto i : pre){
            indegree[i[0]]++;
        }
        queue<int>q;
        for(int i = 0 ; i < n ; i++){
            if(indegree[i] == 0) q.push(i);
        }
        vector<int>topo;
        while(!q.empty()){
            int gg = q.front();
            q.pop();
            topo.push_back(gg);
            for(auto i : adj[gg]){
                indegree[i]--;
                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }
        if(topo.size() == n) return topo;
        return {};
    }
};
