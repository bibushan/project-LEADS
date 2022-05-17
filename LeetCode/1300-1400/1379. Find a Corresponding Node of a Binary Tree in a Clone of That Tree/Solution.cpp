/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *result;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            searchTree(cloned, target);
            return result;
    }
        
    void searchTree(TreeNode* cloned, TreeNode* target){
        if(target->val==cloned->val){
            result=cloned;
            return;
        }
        else{
            if(cloned->left!=NULL){
                searchTree(cloned->left, target);
            }
            if(cloned->right!=NULL){
                searchTree(cloned->right, target);
            }
        }
        return;
    }
        
};
