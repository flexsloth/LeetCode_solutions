class Solution {
public:
    vector<int> asteroidCollision(vector<int>& aa) {
        stack<int>st;
        // for(auto i:asteroids) st.push(i);
        vector<int>ans;
        for(int i = 0 ; i < aa.size() ; i++){
            if(aa[i]>0 || st.empty()) st.push(aa[i]);
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(aa[i])) st.pop();
            
                if(!st.empty() && st.top() == abs(aa[i])) st.pop();
                else
                    if(st.empty() || st.top()<0) st.push(aa[i]);
                }
            }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};