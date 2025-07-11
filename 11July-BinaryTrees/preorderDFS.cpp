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
    void dfs(TreeNode* root, vector<int>& ans){
        // base case
        if(root == NULL) return;

        // recursive case

        // NLR

        ans.push_back(root->val); // N
        dfs(root->left, ans); // L
        dfs(root->right, ans); // R
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        dfs(root, ans);

        return ans;
    }
};
