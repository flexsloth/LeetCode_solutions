class Solution {
public:
    
    bool doesValidArrayExist(vector<int>& de) {
        int ans = 0;
        for(auto i : de) 
            ans+=i;
        if(ans%2) 
            return false;
        return true;
    }
};