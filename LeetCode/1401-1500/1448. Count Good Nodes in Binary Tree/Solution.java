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

    public int goodNodes(TreeNode root) {
        if(root == null)
            return 0;
        int count = 1;
        count += traverse(root.left, root.val);
        count += traverse(root.right, root.val);
        return count;
    }
    
    public int traverse(TreeNode root,int max) {
        int amount = 0;
        if(root == null)
            return 0;
        if(root.val >= max) {
            amount++;
            max = root.val;
        }
        amount += traverse(root.left, max);
        amount += traverse(root.right, max);
        return amount;
    }
}