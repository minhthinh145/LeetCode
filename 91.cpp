#include <bits/stdc++.h>
using namespace std;

int numDecodings(string s)
{
    if(s[0]=='0')
    {
        return 0;
    }
    int n = s.length();
    vector<int>dp(n+1,0);

    dp[0] = dp[1] = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        int one = s[i-1] - '0';
        int two = stoi(s.substr(i-2,0));

        if(0<=one && one <= 9)
        {
            dp[i] += dp[i-1];
        }
        if(10 <= two && two <= 26)
        {
            dp[i] += dp[i-2];
        }
    }
    return dp[n];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}