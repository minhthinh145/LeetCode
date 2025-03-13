#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int tmp = 0;
    for(int i = 0 ; i < nums.size() ; i++){
      tmp = tmp^nums[i];
    }
    return tmp;
 }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}