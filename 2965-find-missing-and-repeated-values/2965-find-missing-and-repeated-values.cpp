class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        int sum = 0;
        int n = grid.size();
        // for(auto i : grid){
        //     for(auto j : i){
        //         mp[i[j]]++;
        //         sum+=i[j];
        //     }
        // }
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                mp[grid[i][j]]++;
                sum+=grid[i][j];
            }
        }
        vector<int>ans;
        for(auto i : mp){
            if(i.second == 2){
                ans.push_back(i.first);
                sum-=i.first;
            }
        }
        
        int a = n*n;
        int ff = (a*(a+1))/2;
        int g = ff-sum;
        ans.push_back(g);
        return ans;
    }
};