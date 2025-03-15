#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //kĩ thuật 2 con trỏ
    //i , j
    sort(nums.begin(),nums.end());
    vector<vector<int>> res;
            if (nums.size() < 4) return res;
    for(int i = 0 ; i < nums.size()-3 ; i++)
    {
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j = i + 1 ;  j < nums.size()-2 ; j++)
        {
            if(j > i + 1 && nums[j] == nums[j-1]) continue;
            int left = j + 1;
            int right = nums.size()-1;
            while(left < right)
            {
                long long four_sum =(long long)nums[i] + nums[j] + nums[left] + nums[right];
               
                if( four_sum == target)
                {
                    res.push_back({nums[i],nums[j],nums[left],nums[right]});
                    left ++;
                    right--;
                while(left < right && nums[left] == nums[left-1]) left++;
                while(left < right && nums[right] == nums[right+1]) right--;
                }  
                else if(four_sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }   
            }
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    vector<int> nums;
    int a;
    while(cin>>a)
    {
        if(a==-5) break;
        nums.push_back(a);
    }
    cout<<endl;
    cout<<"nhap target";
    int target;
    cin>>target;
    vector<vector<int>> res = fourSum(nums, target);
    for(auto x : res )
    {
        for(auto e : x ){
            cout<<e<<" ";
        }
        cout<<endl;
    }
    return 0;
}