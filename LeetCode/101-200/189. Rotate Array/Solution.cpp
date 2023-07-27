
/*  Reversal Algorithm
    Time Complexity : O(N)
    Space Complexity: O(1)
*/

class Solution {
public:
  void helper(vector<int> &nums, int start, int end) {
    while (start <= end) {
      int temp = nums[start];
      nums[start] = nums[end];
      nums[end] = temp;
      start++;
      end--;
    }
  }

  void rotate(vector<int> &nums, int k) {
    k = k % nums.size();
    helper(nums, 0, nums.size() - k - 1);
    helper(nums, nums.size() - k, nums.size() - 1);
    helper(nums, 0, nums.size() - 1);
  }
};

/*
    Time Complexity : O(N)
    Space Complexity: O(N)
*/

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> res(n, 0);
    k = k % n;
    for (int i = 0; i < n; i++) {
      res[(i + k) % n] = nums[i];
    }
    for (int i = 0; i < res.size(); i++) {
      nums[i] = res[i];
    }
  }
};