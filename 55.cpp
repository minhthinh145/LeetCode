#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int farthest = 0; //biến lưu vị trí xa nhất 
    for(int i = 0 ; i < nums.size() ; i ++)
    {
        if(i < farthest) return false; // ko đạt được tới vị trí tiếp theo
        farthest = max(farthest, i + nums[i]); // khoảng cách xa nhất có thể đạt đc từ nums[0] đến vị trí tiếp theo
        if(farthest >= nums.size() - 1) return true;
    }
    return false;
}
/*
    có nghĩa là như này
từ nums[0];
tôi có thể nhảy tối đa
0 + nums[0] bước đến 1 vị trí nào đó
i++;
nếu ko tới vị trí liền kề thì có nghĩa là false
còn nếu tới được
Thì xem thử
1 + nums[1] có lớn hơn farthest hiện tại k ( có nhảy xa đc hơn ko )
nếu ko thì tiếp tục tăng i
*/
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}