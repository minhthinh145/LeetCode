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
     void Helper(TreeNode*root, vector<int> &nums)
     {
         if(root==nullptr) return;
         Helper(root->left,nums);
         nums.push_back(root->val);
         Helper(root->right,nums);
 
     }
     vector<int> inorderTraversal(TreeNode* root) {
         vector<int> res;
         Helper(root,res);
         return res;
     }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}