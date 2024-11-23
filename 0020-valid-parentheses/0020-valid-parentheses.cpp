class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto i : s){
            if(i == '(' || i == '{' || i == '[') st.push(i);
            else{
                auto gg = st.top();
                if(st.empty()) return false;
                else if((i == ')' && gg != '(') || 
                (i == '}' && gg != '{') || 
                (i == ']' && gg != '[')){
                    return false;
                }
                else st.pop();
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};