class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // if(heights)
        int n = heights.size();
        if(n == 1) return heights[0];
        vector<int>next(n),prev(n);
        next[n-1] = n;
        prev[0] = -1;
        stack<pair<int,int>>st;
        st.push({heights[0],0});
        for(int i = 1 ; i < n ; i++){
            int ele = heights[i];
            while(!st.empty() && st.top().first >= ele){
                st.pop();
            }
            if(st.empty()){
                prev[i] = -1;
            }
            else{
                prev[i] = st.top().second;
            }
            st.push({heights[i],i});
        }

        stack<pair<int,int>>st1;

        st1.push({heights[n-1],n-1});
        for(int i = n-2 ; i >= 0 ; i--){
            while(!st1.empty() && st1.top().first >= heights[i]){
                st1.pop();
            }
            if(st1.empty()) next[i] = n;
            else next[i] = st1.top().second;
            st1.push({heights[i] , i});
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            // int gg = min(prev[i],next[i]);
            int gg = next[i]-prev[i]-1;
            ans = max(ans, heights[i]*gg);
        }
        return ans;
    }
};