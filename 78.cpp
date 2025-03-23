#include <bits/stdc++.h>
using namespace std;

void backtracking(const vector<int> &nums, vector<vector<int>> &ans , vector<int> &tmp , int start)
{
    ans.push_back(tmp);
    for(int i = start ; i < nums.size() ; i++)
    {
        tmp.push_back(nums[i]);
        backtracking(nums,ans,tmp,i+1);
        tmp.pop_back();
    }
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> tmp;
    backtracking(nums,ans,tmp,0);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> nums = {1,2,3,4,5,6,7};
    vector<vector<int>> ans = subsets(nums);
    for(int i = 0 ; i < ans.size() ; i++)
    {
        for(int j =  0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}