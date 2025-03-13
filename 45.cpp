#include <bits/stdc++.h>
using namespace std;

int jump(vector<int>& nums) {
    int n = nums.size();
    int farthest = 0, jumps = 0 , curr_end = 0;
    for(int i = 0 ; i < n - 1 ; i++)
    {
        farthest = max(farthest,i+nums[i]);
        if(i==curr_end)//néu i đã đạt tới vị trí farthest ( curr_end) thì cho nó nhảy 1 lần
        {
            jumps++;
            curr_end=farthest; //cập nhật tiếp tục cái farthest 
        }
    }
    return jumps;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}