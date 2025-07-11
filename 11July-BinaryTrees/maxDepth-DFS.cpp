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
    int dfs(TreeNode* root){
        // base case
        if(root == NULL) return 0;

        // recursive case

        // LRN

        int afl = dfs(root->left);
        int afr = dfs(root->right);

        return 1 + max(afl, afr);
    }
    int maxDepth(TreeNode* root) {
        int ans = dfs(root);


        return ans;
    }
};
