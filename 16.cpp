#include <bits/stdc++.h>
using namespace std;

    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        //khởi tạo giá trị gần nhất
        int res = nums[0] + nums[1] + nums[3];
        //bắt đầu giải bài toán
        for(int i = 0 ; i < n - 2 ; i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            
            int left = i + 1;
            int right = n - 1;
        
            //total
            //lấy số gần target nhất
            while(left < right)// lặp đến khi nào left và right chạm nhau
        {
            int total = nums[i] + nums[left] + nums[right];

            if(abs(target - total) < abs(target - res))
            {
                res = total;
            }
            else if(total > target)
            {
                right--;
            }
            else if(total < target)
            {
                left++;
            }
            else
            {
                return total;
            }
        }
        }
        return res;
    } 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> res = {-1,2,1,-4};
    int target = 1;
    cout<<threeSumClosest(res,1);
    return 0;
}