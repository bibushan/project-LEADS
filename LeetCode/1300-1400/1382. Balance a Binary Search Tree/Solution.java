/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */

// Convert the unbalanced BST into an array of sorted nodes using inorder
// traversal
// Using the sorted array create a balanced BST

class Solution {
    List<TreeNode> sortedNodes = new ArrayList<>();

    public TreeNode balanceBST(TreeNode root) {
        inorder(root); // Inorder traversal of the BST to make a sorted list of nodes
        return toBST(0, sortedNodes.size() - 1); // Convert the sorted nodes to a balanced search tree

    }

    public void inorder(TreeNode root) {
        if (root == null)
            return;
        inorder(root.left);
        sortedNodes.add(root);
        inorder(root.right);
    }

    TreeNode toBST(int low, int high) {
        if (low > high)
            return null;
        int mid = low + (high - low) / 2;
        TreeNode root = sortedNodes.get(mid); // the element at the middle of array is the root
        root.left = toBST(low, mid - 1); // the element at the center of the left portion is the left child as it is a
                                         // BST
        root.right = toBST(mid + 1, high); // Similarly, element at the center of the right portion is the right child
                                           // of the BST
        return root;
    }
}