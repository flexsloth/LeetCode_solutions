/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int maxi(TreeNode gg){
        if(gg == null) return 0;
        
        if((gg.left != null) && (gg.right != null)) 
            return Math.max(1+maxi(gg.left),1+maxi(gg.right));
        
        return Math.max(1+maxi(gg.left),1+maxi(gg.right));
    }
    public int maxDepth(TreeNode root) {
        return maxi(root);   
    }
}