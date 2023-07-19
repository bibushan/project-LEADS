class Solution {
public:
  vector<int> findDisappearedNumbers(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      int ab = abs(nums[i]);
      nums[ab - 1] = abs(nums[ab - 1]) * -1;
    }

    vector<int> res;
    for (int c = 0; c < nums.size(); c++) {
      if (nums[c] > 0) {
        res.push_back(c + 1);
      }
    }

    return res;
  }
};