class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int ans = nums.size() * (nums.size() + 1) / 2;
    for (int i = 0; i < nums.size(); i++)
      ans -= nums[i];
    return ans;
  }
};