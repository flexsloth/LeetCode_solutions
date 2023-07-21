#define ll long long
class MinStack {
public:
    stack<ll>st;
    stack<ll>mstk;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mstk.empty() || val<=mstk.top()) mstk.push(val);
    }
    
    void pop() {
         int gg=st.top();
	    if(!st.empty()) st.pop();
	    if(!mstk.empty() && gg==mstk.top()) mstk.pop();
    }
    
    int top() {
        if(!st.empty())
	        return st.top();
        return -1;
    }
    
    int getMin() {
        return mstk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
