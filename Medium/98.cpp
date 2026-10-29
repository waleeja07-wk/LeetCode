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
    vector<int> v;
    vector<int> inorderTraversal(TreeNode *root)
    {
        if (!root)
            return v;
        inorderTraversal(root->left);
        v.push_back(root->val);
        inorderTraversal(root->right);
        return v;
    }

    bool isSorted(vector<int> &r)
    {
        for (int i = 1; i < r.size(); i++)
        {
            if (r[i] <= r[i - 1])
            {
                return false;
            }
        }
        return true;
        return false;
    }

    bool isValidBST(TreeNode *root)
    {
        if (!root)
            return true;
        vector<int> res = inorderTraversal(root);
        bool yes = isSorted(res);
        return yes;
    }
};