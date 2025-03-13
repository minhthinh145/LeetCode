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
    
     //idea : dùng đệ quy duyệt liên tục để check trái = phải ?
     /**
    * @brief Kiểm tra xem cây nhị phân có đối xứng không.
    *
     * @param root Con trỏ đến gốc của cây nhị phân.
    * @return Trả về true nếu cây đối xứng, ngược lại false.
     */
     bool isMirror(TreeNode *tree1,TreeNode *tree2)
     {
        if(tree1==nullptr && tree2 == nullptr) // trg hợp cả 2 đều bằng nhau tới node cuối cùng
        {
            return true;
        }
        if(tree1 == nullptr || tree2 ==nullptr) //trg hợp cả 2 có 1 node bị dư ( k đối xứng )
        {
            return false;
        }
        return (tree1->val == tree2 -> val) && isMirror(tree1->left,tree2->right) && isMirror(tree1->right,tree2->left);
        //đệ quy sang 2 bên
     }
     /// @brief This funcion check a BinaryTree is Symmetric 
     /// @param root BinaryTree
     /// @return true if is a Symmetric tree 
     bool isSymmetric(TreeNode *root)
     {
        if(root==nullptr) return true;
        return isMirror(root->left,root->right);
     }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
    return 0;
}