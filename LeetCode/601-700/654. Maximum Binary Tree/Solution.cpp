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

/*
    Using Recursionh
    Time Complexity: O(N*N)
    Space Complexity: O(N) Recursion Stack
*/
class Solution {
public:
  TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
    if (nums.size() == 0)
      return NULL;
    return constructTree(nums, 0, nums.size() - 1);
  }

  TreeNode *constructTree(vector<int> &arr, int start, int end) {
    if (arr.size() == 0)
      return NULL;
    if (start > end)
      return NULL;

    int maxIdx = start;
    for (int i = start; i <= end; i++) {
      if (arr[i] > arr[maxIdx]) {
        maxIdx = i;
      }
    }

    TreeNode *root = new TreeNode(arr[maxIdx]);
    root->left = constructTree(arr, start, maxIdx - 1);
    root->right = constructTree(arr, maxIdx + 1, end);

    return root;
  }
};