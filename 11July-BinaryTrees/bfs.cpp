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
        vector<int> lvl;
        vector<vector<int>> allLvl;

        if(root == NULL) return allLvl;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();

            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                lvl.push_back(front->val);
                q.pop();


                // if left child exists, push it in the queue
                if(front->left != NULL) q.push(front->left);

                // if right child exists, push it in the queue
                if(front->right != NULL) q.push(front->right);
            }

            allLvl.push_back(lvl);
            lvl.clear();
        }

        return allLvl;
    }
};
