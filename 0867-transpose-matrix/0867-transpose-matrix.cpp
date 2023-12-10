class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mx) {
        vector<vector<int>>ans;
        for(int i = 0 ; i < mx[0].size() ; i++){
            vector<int>a;
            for(int j = 0 ; j < mx.size() ; j++){
                a.push_back(mx[j][i]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};