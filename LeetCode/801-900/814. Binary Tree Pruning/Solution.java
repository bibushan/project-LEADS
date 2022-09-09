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
    public TreeNode pruneTree(TreeNode root) {
        return postOrder(root);
    }
    
    public TreeNode postOrder(TreeNode curr) {
        if(curr == null)
            return null;
        TreeNode left = postOrder(curr.left);
        TreeNode right = postOrder(curr.right);
        if(left == null)
            curr.left = null;
        if(right == null)
            curr.right = null;
        if(left == null && right == null && curr.val == 0) {
            curr = null;
            return null;
        }
        return curr;
    }
}