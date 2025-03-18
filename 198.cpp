#include <bits/stdc++.h>
using namespace std;
int rob(vector<int>& nums) {
    //ta có thể dùng dp như sau :
    if(nums.empty()) return 0;
    if(nums.size() == 1) return nums[0];
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]); // lấy max giữa 2 căn nhà vì k cướp dc 2 cái cùng lúc
    for(int i = 2 ; i < nums.size() ; i++)
    {
        dp[i] = max(dp[i-1],nums[i] + dp[i-2]);
        /*
            dp[i-1] ở đây có nghĩa là tôi sẽ ko cướp căn nhà này, ti sẽ đi cướp dãy nhà trước kia
            nums[i] + dp[i-2] có nghĩa là tôi sẽ cướp nhà này 
        */
    }
    return dp[nums.size()-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}