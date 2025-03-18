#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices)
{
    /* 
        nếu ngày đó ta bán mà cái val > ngày trước kia ta mua thì cập nhật profit
    */
   int n = prices.size();
   int profit = 0;
   for(int i = 1 ; i < n ; i++)
   {
        if(prices[i] > prices[i-1])
        {
            profit += prices[i] - prices[i-1];
        }
   }
   return profit;
}
//second way : we use dp array 
int maxProfitdp(vector<int>& prices)
{   
    int n = prices.size();
    vector<int> dp(2,0);
    // dp[0] - Không có vớ 
    // dp[1] - Có vớ
    dp[1] = -prices[0];
    for(int i = 0 ; i < n ; i++)
    {
        //nếu ta k có vớ , ta giữ nguyên ( k mua gì), nếu ta bán thì bán vớ của ngày trc đó
        dp[0] = max(dp[0], dp[1] + prices[i]);
        //nếu ta  có ov71, ta có thể giữ nguyên ( ko bán), nếu ta mua vớ thì trừ bớt lợi luận của dp[0] ngày trc
        dp[1] = max(dp[1], dp[0] - prices[i]);

    }
    return dp[0]; //kq là lợi nhuận tối đa khi ta đã bán hết vớ
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}