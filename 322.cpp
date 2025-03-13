#include <bits/stdc++.h>
using namespace std;
/*
idea bài toán : dùng qui hoạch động : 
tạo 1 mảng với amount + 1 phần tử, mặc định các phần tử là vô cùng ( amount + 1)

*/
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;  
    for(int i = 1 ; i <= amount;i++)
    {
        for(int c : coins)
        {
            if(i >= c)
            {
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }
     return dp[amount] > amount ? -1 : dp[amount];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}