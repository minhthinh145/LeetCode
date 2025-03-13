#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isBalanced(TreeNode *root)
{
    return Height(root) == -1;
}
int Height(TreeNode *node)
{
    if (node == nullptr)
        return 0;
    int leftH = Height(node->left);
    if (leftH == -1)
        return -1;
    int rightH = Height(node->right);
    if (rightH == -1)
        return -1;
    if (abs(leftH - rightH) > 1)
        return -1;
    return max(leftH, rightH) + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    return 0;
}