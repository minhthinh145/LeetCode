#include <bits/stdc++.h>
using namespace std;
    int binarySearch(const vector<int> &arr , int n )
    {
        int left = 0;
        int right = arr.size() - 1;
        while(left <= right)
        {
            int middle = left + (right - left)/2;

            if(arr[middle] == n) return middle;

            if(arr[middle] < n)
            {
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
            }
        }
        return left;
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;        
        for(int n : nums)
        {
            if(res.empty() || res.back() < n )
            {
                res.push_back(n);
            }
            else
            {
                int idx = binarySearch(res,n);
                res[idx] = n;
            }
        }
        return res.size();
    } 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}