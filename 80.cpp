#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    int index = 0 ;
    for(int i = 0  ; i < nums.size() ; i++)
    {
        if(index < 2 || nums[i] != nums[index-2]) //phải có điều kiện nums[i] != nums[index-2] để lọc các ptử sau 2 ph6àn tử đầu
        {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}