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

    bool isSameTree(TreeNode* root, TreeNode* subroot)
    {
        // 01 both trees are empty
        if(root==NULL && subroot==NULL) return true;
        // 02 one tree is empty and another is not
        if(root==NULL || subroot==NULL) return false;
        // 03 trees values does not match
        if(root->val != subroot->val) return false;
        // 04 if match the tree then recursively check the left and right subtrees
        return isSameTree(root->left,subroot->left) && isSameTree(root->right,subroot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        // 01 if root is null subroot cannot be a subtree
        if(root==NULL) return false;
        // 02 if trees are identical
        if(isSameTree(root,subroot))  return true;
        // 03 recursively check left and right subtrees
        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
};