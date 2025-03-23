#include <bits/stdc++.h>
using namespace std;
bool backtracking(const vector<int> &nums, vector<bool>&used,int k,int start , int currSum,int target)
{
    if(k == 0) return true; //tìm đủ tập con
    if(currSum == target) return backtracking(nums,used,k-1,0,0,target);
    for(int i = start ; i < nums.size() ; i++)
    {
        if(used[i] || currSum + nums[i] > target) continue;
        used[i] = true;
        if(backtracking(nums,used,k,i+1,currSum + nums[i],target)) return true;
        used[i] = false;
    }
}
bool canPartitionKSubsets(vector<int>& nums, int k) 
{
    int sum = accumulate(nums.begin(), nums.end(), 0);
    if(sum%k!=0) return false;
    int target = sum / k;
    vector<bool> used(nums.size(),false);
    sort(nums.rbegin(),nums.rend());
    return backtracking(nums,used,k,0,0,target);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}