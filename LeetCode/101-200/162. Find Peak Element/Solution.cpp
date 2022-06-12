/*Runtime: 9 ms, faster than 22.31% of C++ online submissions for Find Peak
Element. Memory Usage: 8.9 MB, less than 50.67% of C++ online submissions for
Find Peak Element.*/

class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    int length = nums.size();
    if (length == 1)
      return 0;
    if (nums[0] > nums[1])
      return 0;
    if (nums[length - 1] > nums[length - 2])
      return length - 1;

    for (int i = 1; i < length - 1; i++) {
      if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
        return i;
    }
    return -1;
  }
};