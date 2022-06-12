class Solution {
public:
  int minOperations(vector<int> &nums, int x) {
    int sum = 0, n = nums.size();
    for (int i = 0; i < n; i++)
      sum += nums[i];
    int target = sum - x;
    int cur_sum = 0, max_len = 0;
    int startIndex = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
      cur_sum += nums[i];
      while (startIndex <= i && cur_sum > target) {
        cur_sum -= nums[startIndex];
        startIndex += 1;
      }
      if (cur_sum == target) {
        found = true;
        max_len = max(max_len, i - startIndex + 1);
      }
    }
    return found ? n - max_len : -1;
  }
};