#include <bits/stdc++.h>
using namespace std;
class MinStack {
    private :
    stack<pair<int,int>> st;
    
public:

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push({val,val});
        }
        else{
            int valMin = min(val,st.top().second);
            st.push({val,valMin});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}