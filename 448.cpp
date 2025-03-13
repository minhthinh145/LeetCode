#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<bool> check(nums.size() + 1);
    vector<int> res;
    for (auto a : nums)
        check[a] = true;
    for (int i = 1; i <= nums.size(); i++)
    {
        if (!check[i])
            res.push_back(i);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}