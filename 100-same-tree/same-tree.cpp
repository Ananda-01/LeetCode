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
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // 01 If both nodes are null, they are identical
        if(p==NULL && q==NULL) return true;
        
        // 02 If they one of the nodes is NULL, they are not identical
        if(p==NULL || q==NULL || p->val != q->val) return false;

        // 03 recursively check left and right trees
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};