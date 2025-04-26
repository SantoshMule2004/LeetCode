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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p && !q)
            return true;

        if (!p || !q || p->val != q->val)
            return false;

        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));

        //********************** without recursion ***************************

        // queue<TreeNode*> q1, q2;
        // q1.push(p);
        // q2.push(q);

        // while(!q1.empty() && !q2.empty()) {
        //     TreeNode* t1 = q1.front(); q1.pop();
        //     TreeNode* t2 = q2.front(); q2.pop();

        //     if(!t1 && !t2) continue;

        //     if(!t1 || !t2 || t1->val != t2->val) return false;

        //     q1.push(t1->left);
        //     q1.push(t1->right);

        //     q2.push(t2->left);
        //     q2.push(t2->right);
        // }
        // return (q1.empty() && q2.empty());
    }
};