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

    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if(!root) return false;
        targetSum -= root -> val;
        if(!root->left && root->right) return targetSum == 0;
        return hasPathSum(root->left,targetSum) || hasPathSum(root -> right , targetSum);
    }
    
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}