class Solution {
public:
  int thirdMax(vector<int> &nums) {
    int a = INT_MIN, b = INT_MIN, c = INT_MIN, d = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > a) {
        c = b;
        b = a;
        a = nums[i];
      } else if (nums[i] == a) {
        if (d == 0) {
          d++;
        }
        continue;
      } else if (nums[i] > b) {
        c = b;
        b = nums[i];
      } else if (nums[i] == b) {
        if (d == 1) {
          d++;
        }
        continue;
      } else if (nums[i] > c) {
        c = nums[i];
      } else if (nums[i] == c) {
        if (d == 2) {
          d++;
        }
        continue;
      } else {
        d--;
      }
      d++;
    }
    if (d > 2) {
      return c;
    } else {
      return a;
    }
  }
};