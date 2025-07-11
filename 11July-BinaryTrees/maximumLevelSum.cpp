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
    int maxLevelSum(TreeNode* root) {
        int lvlSum = 0;
        int maxSum = INT_MIN;
        int lvl = 1;
        int maxLvl = 1;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();

            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                lvlSum += front->val;
                q.pop();

                // check for LC
                if(front->left != NULL) q.push(front->left);

                // check for RC
                if(front->right != NULL) q.push(front->right);
            }

            if(maxSum < lvlSum){
                maxSum = lvlSum;
                maxLvl = lvl;
            }

            lvl++;
            lvlSum = 0;
        }

        return maxLvl;
    }
};
