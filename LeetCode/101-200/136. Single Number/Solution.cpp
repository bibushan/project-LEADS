class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int ans = 0;
    for (int curr : nums) {
      ans ^= curr;
    }
    return ans;
  }
};