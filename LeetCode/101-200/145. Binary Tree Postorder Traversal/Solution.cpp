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
    vector<int> res;
    
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return res;
    }
    
    void postOrder(TreeNode* node) {
        if(node == NULL)
            return;
        postOrder(node->left);
        postOrder(node->right);
        res.push_back(node->val);
    }
};