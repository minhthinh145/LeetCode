#include <vector>
#include <iostream>
using namespace std;

void backtrack(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums); // Lưu hoán vị vào kết quả
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);    // Hoán đổi để chọn phần tử tiếp theo
        backtrack(nums, start + 1, result);  // Đệ quy với phần tử tiếp theo
        swap(nums[start], nums[i]);    // Hoán đổi lại để quay lui
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(nums, 0, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    for (auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
