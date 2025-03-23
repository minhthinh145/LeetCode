#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> path;
    backtrack(s,0,path,res);
    return res;
}

void backtrack(const string &s, int start , vector<string> &path , vector<vector<string>> &res)
{
    if(start == s.length()){ 
    res.push_back(path);
    return;
    }
    for(int end = start + 1 ; end <= s.length() ; end++)
    {
        if(isPalindrome(s,start,end-1))
        {
            path.push_back(s.substr(start,end-start));
            backtrack(s,end,path,res);
            path.pop_back();
        }
    }
}
bool isPalindrome(const string &s , int left , int right)
{
    while(left < right) 
    {
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}