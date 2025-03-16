#include <bits/stdc++.h>
using namespace std;
void dfs(string curr , int open , int close , int n , vector<string> &res)
{
    if(curr.length() == n * 2 )
    {
        res.push_back(curr);
        return;
    }
    if(open < n )
    {
        dfs(curr+"(" , open + 1 , close , n , res);
    }
    if(close < open)
    {
        dfs(curr+")" , open , close + 1 , n  ,res);
    }
}
vector<string> generateParenthesis(int n) {        
    vector<string> res;
    dfs("",0,0,n,res);
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}