class Solution {
public:
    vector<vector<int>>graph;
    vector<int>visited;
    bool dfs(int i){
        if(visited[i] == 1) return true;
        if(visited[i] == 2) return false;
        visited[i] = 1;
        for(auto x : graph[i]){
            if(dfs(x)){
                return true;
            }
        }
        visited[i] = 2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph.resize(numCourses);
        visited.assign(numCourses, 0);
        for(auto i : prerequisites){
            graph[i[0]].push_back(i[1]);
        }
        for(int i = 0 ; i < numCourses ; i++){
            if(!visited[i] && dfs(i)){
                return false;
            }
        }
        return true;
    }
};