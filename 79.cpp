#include <bits/stdc++.h>
using namespace std;
//ta dùng dfs để đi tứ phía 
bool dfs(vector<vector<char>> &board, string &word , int i , int j , int k)
{
    //i là đang xét theo hàng , j là theo cột
    if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size())
    {
        return false;
    }
    if(k == word.size()-1)
    {
        return true;
    }

    char tmp = board[i][j];// lưu lại để quay lui
    //đi 4 hướng
    bool tracking = dfs(board,word,i+1,j,k+1) || dfs(board,word,i-1,j,k+1) || dfs(board,word,i,j+1,k+1) || dfs(board,word,i,j-1,k+1);
    
    board[i][j] = tmp; //khôip hục để track

    return tracking;
}
bool exist(vector<vector<char>>& board, string word) {
    int m = board.size() ; int n = board[0].size();
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; i++)
        {
            if(dfs(board,word,i,j,0));
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}