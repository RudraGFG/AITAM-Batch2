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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        if(root == NULL) return 0;

        int lvl = 0;

        while(!q.empty()){
            int sz = q.size();

            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                q.pop();

                // check for LC
                if(front->left != NULL) q.push(front->left);

                // check for RC
                if(front->right != NULL) q.push(front->right);
            }

            lvl++;
        }

        return lvl;
    }
};
