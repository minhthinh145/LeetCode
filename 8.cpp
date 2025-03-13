#include <bits/stdc++.h>
using namespace std;
 bool cmp(char c){
        if( (c>='0' && c<='9')||c=='-'|| c=='+'||c==' '){

            return true;
        }
        return false;
    }
    int myAtoi(string s) {
        string res = "";
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(!cmp(s[i])){
                break;
            }
             if(cmp(s[i])){
                  if (s[i] == '+' && res.empty()) {count++;continue;}
                if (s[i] == '-' && res.empty()) {
                    if(count==1){break;};
                    
                    res += s[i];}
                else  {res += s[i];}
                
            }
            else if(s[i]==' '){
                continue;
            }
            else{
                break;
            }
        }

        if (res.empty() || res == "-") return 0;
        stringstream ss;
        long long x;
        ss<<res;
        ss>>x;
        if (x < INT_MIN) return INT_MIN;
        if (x > INT_MAX) return INT_MAX;

        return (int)x;
    }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    cout<<myAtoi(s);
    return 0;
}