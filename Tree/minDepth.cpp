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
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;

        if (!root->left)
            return minDepth(root->right) + 1;

        if (!root->right)
            return minDepth(root->left) + 1;

        return min(minDepth(root->left), minDepth(root->right)) + 1;

        /*
        ***************** without recursion *******************

        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int depth;

        while(!q.empty()) {
            TreeNode* curr = q.front().first;
            depth = q.front().second;
            q.pop();

            if(!curr->left && !curr->right) return depth;

            if(curr->left) q.push({curr->left, depth+1});
            if(curr->right) q.push({curr->right, depth+1});
        }
        return depth+1;
        */
    }
};