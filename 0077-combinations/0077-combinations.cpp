class Solution {
public:
    vector<vector<int>> ans;
    vector<int>temp;
    void combi(int n , int k , int idx){
        if(temp.size() == k){
            ans.push_back(temp);
            return;
        }
        for(int i = idx ; i < n ; i++){
                temp.push_back(i+1);
                combi(n,k,i+1);
                temp.pop_back();        
        }
    }
    vector<vector<int>> combine(int n, int k) {
        combi(n,k,0);
        return ans;
    }
};










