
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int BinarySearch(vector<int> nums , int target){
        int left =  0;
        int right = nums.size();
        if(target > nums[right-1]){
            return right;
        }
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                right = mid -1;
            }
            if(nums[mid] < target){
                left = mid +1;
            }
        }
        return left;
    }
    int searchInsert(vector<int>& nums, int target) {
        return BinarySearch(nums,target);
    }
};