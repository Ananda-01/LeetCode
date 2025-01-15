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
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL) return {};
        bool flag=true;

        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;  // level er sob val rakar jonno
            for(int i=0;i<n;i++)
            {
                TreeNode*f=q.front();
                q.pop();
                level.push_back(f->val);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }

            if(flag==false)
            {
                reverse(level.begin(),level.end());
            }

            ans.push_back(level);
            flag=!flag;  // false thakle true kore dibe and true thakle false kore dibe
        }

        return ans;
    }
};