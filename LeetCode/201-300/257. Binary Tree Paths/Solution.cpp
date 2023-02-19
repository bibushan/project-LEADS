/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  vector<string> res;

  void addPath(TreeNode *root, string s) {
    if (root == NULL)
      return;

    if (s.size() > 0)
      s += "->";

    s += to_string(root->val);

    if (root->left == NULL && root->right == NULL)
      res.push_back(s);
    else {
      addPath(root->left, s);
      addPath(root->right, s);
    }
  }

  vector<string> binaryTreePaths(TreeNode *root) {
    if (root == NULL)
      return res;

    string s = "";
    addPath(root, s);
    return res;
  }
};