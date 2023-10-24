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
    vector<int> largestValues(TreeNode* root) {
        if(root == NULL) return {};
        vector<int>ans;
        queue<TreeNode*>ss;
        ss.push(root);
        int maxi = INT_MIN;
        
        while(!ss.empty()){
            int n = ss.size();
            maxi = INT_MIN;
            while(n--){
                TreeNode* nn = ss.front();ss.pop();
                if(nn->left != NULL) ss.push(nn->left);
                if(nn->right != NULL) ss.push(nn->right);
                maxi = max(maxi , nn->val);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};