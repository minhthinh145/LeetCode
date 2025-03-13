#include <bits/stdc++.h>
using namespace std;
// bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int i = 0;
//         while(true){
//             if(nums[i]==nums[i+1]){
//                 return true;
//             }
//             else{    
//                 i++;
//             }
//         }
//     } 
bool containsDuplicate(vector<int>& nums) {
    set <int> s;
    for(int i = 0 ; i < nums.size() ; i++){
        s.insert(nums[i]);
    }
    if(s.size() != nums.size()){
        return true;
    }
    return false;
    } 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}