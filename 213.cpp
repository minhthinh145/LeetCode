#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
    /*
        Do ta k cướp bth dc vì thành hình tròn nên ta chìa trg hợp 
        TH 1 : cướp từ 0 -> n-2
        TH 2 : cướp từ 1 -> n-1
    */
   //xử lý các trg hợp ngoại lệ
   if(nums.empty()) return 0;
   if(nums.size() == 1) return nums[1];
   if(nums.size() == 2) return max(nums[0],nums[1]);

   int n = nums.size();
   //TH 1 :  cướp từ 0 -> n -2 
   vector<int>dp1(n);
   dp1[0] = nums[0];
   dp1[1] = max(nums[0],nums[1]);
   for(int i = 2 ; i < n -1 ; i++) // n-1 vì ta đang xét tới n-2
   {
        dp1[i] = max(dp1[i-1],nums[i] + dp1[i-2]);
   }
   
   //TH2 : cuóp từ 1 -> n - 1
   vector<int>dp2(n);
   dp2[1] = nums[1]; //ko có xét ngôi nhà đầu tiên
   dp2[2] = max(nums[1],nums[2]);
   for(int i = 2 ; i < n ;i++)
   {
        dp2[i] = max(dp2[i-1],nums[i] + dp2[i-2]);
   }

   return max(dp1[n-2],dp2[n-1]);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}