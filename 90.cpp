#include <bits/stdc++.h>
using namespace std;
void backtracking(const vector<int> &nums, vector<vector<int>> &ans , vector<int> &tmp , int start)
{
    ans.push_back(tmp);
    for(int i = start ; i < nums.size() ; i++)
    {
        if(i > start && nums[i] == nums[i-1]) continue;
        tmp.push_back(nums[i]);
        backtracking(nums,ans,tmp,i+1);
        tmp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int> tmp;
    backtracking(nums,ans,tmp,0);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}