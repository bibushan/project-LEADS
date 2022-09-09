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
    StringBuilder str;
    
    public String tree2str(TreeNode root) {
        str = new StringBuilder();
        preOrder(root);
        return str.toString();
    }
    
    public void preOrder(TreeNode root) {
        if(root == null)
            return;
        if(root.left==null && root.right==null) {
            str.append(root.val);
            return;
        }
        str.append(root.val);
        str.append('(');
        preOrder(root.left);
        str.append(')');
        if(root.right != null) {
            str.append('(');
            preOrder(root.right);
            str.append(')');
        }
        return;
    }
}