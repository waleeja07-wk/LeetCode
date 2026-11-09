/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int height(TreeNode *root)
    {
        if (!root)
            return 0;
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;
        int left = height(root->left);
        int right = height(root->right);
        int diff = left - right;
        if (diff > 1 || diff < -1)
        {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
};