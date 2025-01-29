class Solution {
public:
    vector<int>parent;
    int getRoot(int x){
        if(parent[x] == x)
            return x;
        return parent[x] = getRoot(parent[x]);
    }
    void join(int u,int v){
        if(parent[u] != parent[v]){
            parent[getRoot(v)] = getRoot(u);
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = 2000;
        parent.resize(n+1);
        for(int i = 0 ; i < parent.size() ; i++)
                parent[i] = i;
        for(int i = 0 ; i < edges.size() ; i++){
            int u,v;
            u = edges[i][0];
            v = edges[i][1];
            if(getRoot(u) == getRoot(v)){
                int a = min(u,v);
                int b = max(u,v);
                return{a,b};
            }
            join(u,v);
        }
        return {-1,-1};
    }
};