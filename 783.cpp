#include <bits/stdc++.h>
using namespace std;
/*
Given the root of a Binary Search Tree (BST), return the minimum difference between the values of any two different nodes in the tree.
 */
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
         TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     };

     void Sol(TreeNode *root, TreeNode *&prev , int MinDiff)
     {
        if(root== nullptr) return;
        Sol(root->left,prev,MinDiff);
        if(prev != nullptr)
        {
            MinDiff = min(MinDiff,root -> val - prev -> val);
        }
        prev = root;
        Sol(root->right,prev,MinDiff);
     }
     int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;
        TreeNode *prev = nullptr;
        Sol(root,prev,minDiff);
    return minDiff;
     }
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}