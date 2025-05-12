class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        set<int>s;
        vector<int>ans;
        for(int i = 0 ; i < d.size() ; i++){
            if(d[i] != 0)
            for(int j = 0 ; j < d.size() ; j++){
                if(j!=i)
                for(int k = 0 ; k < d.size() ; k++){
                    if(k != j && k != i){
                        int gg = 100*d[i] + 10*d[j] + d[k];
                        if(gg%2 == 0) s.insert(gg);
                    }
                }
            }
        }
        for(auto i : s) ans.push_back(i);
        return ans;
    }
};