class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int len = arr.size();
        int row = mat.size();
        int col = mat[0].size();
        map<int,pair<int,int>> mp;
        vector<int> vx1(mat.size(),0),vx2(mat[0].size(),0);
        
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[0].size();j++)
                mp.insert({mat[i][j],{i,j}});

        for(int i=0;i<len;i++){
            int rowind = mp[arr[i]].first;
            int colind = mp[arr[i]].second;
            vx1[rowind]++;
            vx2[colind]++;
            if(vx1[rowind]==mat[0].size()) 
                return i;
            if(vx2[colind]==mat.size()) 
                return i;
        }
        return len-1;
    }
};