#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    //sort để cb cho việc sử dụng 2 con trỏ
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> res;
    //bắt đầu vào bài toán chính
    for(int i = 0 ; i < n - 2 ; i++)//dừng ở n - 2 vì cần 3 số 
    {
        if(i>0 && nums[i] == nums[i-1]) //bỏ số trc kia vì đã duy r
        continue;
        int left = i + 1; // số kế tiếp i
        int right = n-1; //số từ bên ngoài vào
        while(left < right) // đk dừng
        {
            int total = nums[i] + nums[left] + nums[right];
            if(total == 0)
            {
                res.push_back({nums[i],nums[left],nums[right]});

                //bỏ qua số trùng trước khi dịch
                while(left < right && nums[left] == nums[left+1])
                {
                    left++;
                }
                while(left < right && nums[right] == nums[right-1])
                {
                    right--;
                }
                left ++;
                right--;
            }
            else if(total<0)
            {
                //cần 1 số lớn hơn để total + x = 0
                //-> dịch sang phải
                left ++;
            }
            else
            {
                right--;
            }
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}