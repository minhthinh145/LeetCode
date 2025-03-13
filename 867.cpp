#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int m = matrix.size(); // hàng
    int n = matrix[0].size();//số cột
    vector<vector<int>> res(n,vector<int> (m));
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++){
            res[j][i] = matrix[i][j];
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}