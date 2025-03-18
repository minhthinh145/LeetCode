#include <bits/stdc++.h>
using namespace std;
bool wordBreak(string s, vector<string>& wordDict) {
    vector<bool>dp(s.length()+1,false);
    dp[0] = true;
    for(int i = 1 ; i <= s.size() ; i++)
    {
        for(const string &w : wordDict)
        {
            int start = i - w.length();
            if(start >=0 && dp[start] && s.substr(start,w.length()) == w)
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[s.size()];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}