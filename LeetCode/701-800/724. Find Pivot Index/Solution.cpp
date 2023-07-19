class Solution {
public:
  int pivotIndex(vector<int> &nums) {
    int total = 0;
    for (auto i : nums)
      total += i;

    int leftSum = 0;
    int rightSum = total;
    for (int i = 0; i < nums.size(); i++) {
      rightSum -= nums[i];

      if (leftSum == rightSum)
        return i;

      leftSum += nums[i];
    }
    return -1;
  }
};