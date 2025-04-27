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
    bool isMirror(TreeNode *leftNode, TreeNode *rightNode)
    {
        if (!leftNode && !rightNode)
            return true;

        if (!leftNode || !rightNode || leftNode->val != rightNode->val)
            return false;

        return (isMirror(leftNode->left, rightNode->right) && isMirror(leftNode->right, rightNode->left));
    }

    bool isSymmetric(TreeNode *root)
    {
        return isMirror(root->left, root->right);
    }
};