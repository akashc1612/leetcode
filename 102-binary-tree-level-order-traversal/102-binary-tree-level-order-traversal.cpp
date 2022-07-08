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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>> v;
        queue<TreeNode*> q{{root}};
        while(!q.empty()){
            vector<int> c;
            for(int i=q.size();i>0;i--){
                TreeNode* n = q.front();
                q.pop();
                c.push_back(n->val);
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            v.push_back(c);
        }
        return v;}
};