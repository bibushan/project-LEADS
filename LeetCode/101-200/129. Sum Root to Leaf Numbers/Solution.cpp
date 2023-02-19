// Recursive Approach (DFS + Binary Search Tree)
// Time Complexity: O(n)
// Space Complexity: O(n) Call Stack of Recursion

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
  int sum = 0;

  void addLeaves(TreeNode *root, string s) {
    if (root == NULL)
      return;
    s += to_string(root->val);
    if (root->left == NULL && root->right == NULL)
      sum += stoi(s);
    else {
      addLeaves(root->left, s);
      addLeaves(root->right, s);
    }
  }

  int sumNumbers(TreeNode *root) {
    if (root == NULL)
      return 0;
    string s = "";
    addLeaves(root, s);
    return sum;
  }
};

/*
class Solution {
private:
    int sumNumbersHelper(TreeNode* root, int currSum){
        if(root == NULL){
            return 0;
        }
        currSum = currSum * 10 + root->val;
        if(root->left == NULL && root->right == NULL){
            return currSum;
        }
        return sumNumbersHelper(root->left, currSum) +
sumNumbersHelper(root->right, currSum);
    }
public:
    int sumNumbers(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int currSum = 0;
        return sumNumbersHelper(root, currSum);
    }
};
*/