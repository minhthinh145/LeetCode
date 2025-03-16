#include <bits/stdc++.h>
using namespace std;
/*
có nghĩa là 
từ 
left -> mid là toàn bộ phần tử đều lón hơn mảng phải 
*/
bool search(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()-1;
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(nums[mid] == target)
        {
            return true;
        }
        if(nums[mid] == nums[left])
        {
            left ++;
                            continue;
        }
        if(nums[left] <= nums[mid])
        {
            if(nums[left] <= target && target < nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if(nums[mid] < target && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid -1;
            }
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}