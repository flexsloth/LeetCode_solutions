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
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag = true;
        while(!q.empty()){
            vector<int>temp;
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                auto gg = q.front();q.pop();
                if(gg->left != NULL) q.push(gg->left);
                if(gg->right != NULL) q.push(gg->right);
                temp.push_back(gg->val);
            }
            if(flag){
                ans.push_back(temp);
                flag = false;
            }
            else{
                reverse(temp.begin() , temp.end());
                ans.push_back(temp);
                flag = true;
            }
            // flag = false;
        }
        return ans;
    }
};