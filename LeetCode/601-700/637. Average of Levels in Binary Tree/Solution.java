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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> result = new ArrayList();
        if(root == null)
            return result;
        Queue<TreeNode> queue = new LinkedList();
        queue.offer(root);
        
        double sum = 0;
        while(!queue.isEmpty()) {
            sum = 0;
            int size = queue.size();
            
            for(int i=0; i<size; i++) {
                TreeNode curr_node = queue.poll();
                sum += curr_node.val;
                if(curr_node.left != null)
                    queue.offer(curr_node.left);
                if(curr_node.right != null)
                    queue.offer(curr_node.right);
            }
            
            double avg = sum / size;
            result.add(avg);
        }
        
        return result;
    }
}