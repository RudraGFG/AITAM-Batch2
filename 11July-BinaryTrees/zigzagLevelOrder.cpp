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
        vector<vector<int>> allLvl;
        vector<int> singleLvl;

        if(root == NULL) return allLvl;

        int lvl = 1;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz= q.size();

            for(int i=0; i<sz; i++){
                TreeNode* front = q.front();
                singleLvl.push_back(front->val);
                q.pop();

                // check for LC
                if(front->left != NULL) q.push(front->left);

                // check for RC
                if(front->right != NULL) q.push(front->right);
            }

            // check if lvl is even or odd
            if((lvl & 1) == 0){
                reverse(singleLvl.begin(), singleLvl.end());
                allLvl.push_back(singleLvl);
            }
            else{
                allLvl.push_back(singleLvl);
            }

            lvl++;
            singleLvl.clear();
        }

        return allLvl;
    }
};
