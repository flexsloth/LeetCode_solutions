class Solution {
public:
    bool canSortArray(vector<int>& num) {
        if(is_sorted(num.begin(),num.end())) return true;
        
        unordered_map<int,int>m;

        for(auto i : num) {
            m[i] = __builtin_popcount(i);
        }
        
        for(int i=0;i<num.size();i++)
            for(int k=1;k<num.size();k++)
                if(num[k-1] > num[k])
                    if(m[num[k-1]] == m[num[k]]) swap(num[k],num[k-1]);
                    else return false;        
        return is_sorted(begin(num),end(num));
    }
};