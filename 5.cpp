#include <bits/stdc++.h>
using namespace std;
int expandAroundCenter(string s, int left , int right)
{
    while(left >= 0 && right < s.length()  && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left -1;
}
string longestPalindrome(string s)
{
    if(s.empty()) return "";

    int start = 0;
    int end = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        int even = expandAroundCenter(s,i,i+1);
        int odd = expandAroundCenter(s,i,i);
        int max_len = max(even,odd);

        if(end - start < max_len)
        {
            start = i - (max_len -1)/2;
            end = i + max_len/2;
        }
    }
    return s.substr(start,end-start+1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}