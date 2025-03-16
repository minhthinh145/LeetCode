#include <bits/stdc++.h>
using namespace std;
/*
void dfs(vector<int> &candidates , int target , vector<int> &curr , vector<vector<int>> &res, int idx){
    if(target == 0)
    {
        res.push_back(curr);
        return;
    }
    if(target < 0 ) return ;
    for(int i = idx ; i < candidates.size() ; i++)
    {
        curr.push_back(candidates[i]);
        dfs(candidates,target - candidates[i],curr,res,i);
        curr.pop_back();
    }
}
*/
void dfs(vector<int> &candidates, int i , int target , vector<int> &subset , vector<vector<int>> &res , int total)
{
    if(total == target)
    {
        res.push_back(subset);
        return;
    }
    if(i >= candidates.size() || total > target )
    {
        return;
    }

    subset.push_back(candidates[i]);
    dfs(candidates,i,target,subset,res,total + candidates[i]);

    //not include the current elements
    subset.pop_back();
    dfs(candidates,i+1,target,subset,res,total);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> subset;
    int i = 0;
    int total = 0;
    dfs(candidates, i, target, subset, res, total);
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}