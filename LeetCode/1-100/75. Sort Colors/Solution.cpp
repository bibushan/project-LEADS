class Solution {
public:
  void sortColors(vector<int> &nums) {
    int counter[3] = {0, 0, 0};
    for (int current : nums) {
      counter[current]++;
    }
    fill(nums.begin(), nums.begin() + counter[0], 0);
    fill(nums.begin() + counter[0], nums.begin() + counter[0] + counter[1], 1);
    fill(nums.begin() + counter[0] + counter[1], nums.end(), 2);
  }
};