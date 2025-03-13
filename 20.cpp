#include <iostream>
#include <stack>
#include <string>
using namespace std;
 bool isValid(string s) {
        stack<char> st;
        for(auto x : s ){
            st.push(x);
        }
        while(!st.empty()){
            char c = st.top();
            st.pop();
            if(c==st.top()){
                continue;
            }
            else{
                return true;
            }   
        }
    }
int main(){

    return 0;
}