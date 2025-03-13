#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int climbStairs(int n) {
    //cách tiếp cận :
    /*
        Ví dụ có 5 bậc
        để từ bậc 4 lên bậc 5 có :  1 cách ( 1 bước )
        từ bậc 3 lên bậc 5 có : 2 cách ( 2 lần 1 bước , 1 lần 2 bước )
        f(n) = f(n-1) + f(n-2)
    */
   //sử dụng dynamic programming 
   if(n<=2) return n; // nếu là 2 thì 2 cách là 1 thì 1 cách
   int dp[n+1];
   dp[1] = 1; dp[2] = 2; // gán cho 2 bậc thang đầu
   //từ bậc thứ 3
   for(int i = 3 ; i <= n ; i++)
   {
    dp[i] = dp[i-1] + dp[i-2]; // c tức truy hồi
   }
   return dp[n];
   
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<climbStairs(n);
    return 0;
}