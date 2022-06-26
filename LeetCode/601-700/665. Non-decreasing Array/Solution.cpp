class Solution {
public:
  bool checkPossibility(vector<int> &nums) {
    int size = nums.size();
    int count = 0;
    int index = -1;
    for (int i = 0; i < size - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        if (index != -1 && nums[i + 1] < nums[index])
          nums[i + 1] = nums[i];
        count++;
        if (count == 2)
          return false;
      } else
        index = i;
    }
    return true;
  }
};