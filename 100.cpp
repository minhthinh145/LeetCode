#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };
bool isSameTree(TreeNode *p , TreeNode *q)
{
    //đầu tiên quét 2 trg hợp p và q null
    if(p==nullptr && q==nullptr) //nếu cả 2 là nullptr
    {
        return true;
    }
    if(p==nullptr || q==nullptr) //Đã quét trg hợp cả 2 đều null, ta chỉ cần quét trg hợp 1 trong 2 null từ đầu
    {
        return false;
    }
    if(p->val == q->val)//Nếu val của node bên trái = node bên phải ms tiếp tục đệ quy
    {
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);//đệ quy trái phải của cây
    }
    return false; // còn không return false
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}