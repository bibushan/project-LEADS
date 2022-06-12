/*Runtime: 7 ms, faster than 28.96% of C++ online submissions for Running Sum of
1d Array. Memory Usage: 8.5 MB, less than 38.06% of C++ online submissions for
Running Sum of 1d Array.*/

class Solution {
public:
  vector<int> runningSum(vector<int> &nums) {
    for (int i = 1; i < nums.size(); i++)
      nums[i] = nums[i] + nums[i - 1];
    return nums;
  }
};