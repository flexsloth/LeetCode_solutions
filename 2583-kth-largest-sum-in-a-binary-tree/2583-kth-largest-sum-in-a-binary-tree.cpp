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
    map<int,long long>mp;
    void helper(TreeNode* root,int level){
        if(root == NULL){
            return;
        }
        helper(root->left,level+1);
        helper(root->right,level+1);
        mp[level] += root->val;
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        helper(root,0);
        priority_queue<long long>pq;
        for(auto i : mp)pq.push(i.second);
        k--;
        while (k-- && !pq.empty()) pq.pop();
        return pq.empty() ? -1 : pq.top();
    }
};