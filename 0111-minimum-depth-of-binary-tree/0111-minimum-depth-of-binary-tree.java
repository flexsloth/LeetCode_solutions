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
    int mini(TreeNode gg){
        if(gg == null) return 0;
        
        if((gg.left != null) && (gg.right != null)) 
            return Math.min(1+mini(gg.left),1+mini(gg.right));
        
        return Math.max(1+mini(gg.left),1+mini(gg.right));
    }
    public int minDepth(TreeNode root) {
        return mini(root);   
    }
}