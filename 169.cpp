#include <bits/stdc++.h>
using namespace std;

int MajorityElement(vector<int>& nums)
{
    int candidate = 0;
    int count = 0;
    for(int x : nums)
    {
        if(count==0) { candidate = x ;}
        if(x == candidate){count++;}
        else{count--;}
    }
    return candidate;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}