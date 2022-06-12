class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    for (int k = 0; k < nums.size(); k++) {
      if (nums[k] == 0) {
        nums.erase(nums.begin() + k);
        nums.push_back(0);
      }
    }
  }
};

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        nums[index] = nums[i];
        index++;
      }
    }

    for (int i = index; i < nums.size(); i++) {
      nums[i] = 0;
    }
  }
};