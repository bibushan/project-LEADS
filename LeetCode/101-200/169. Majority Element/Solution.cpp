/* Boyer Moore Algorithm*/
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int ans = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (count == 0)
        ans = nums[i];
      if (nums[i] == ans)
        count++;
      else
        count--;
    }
    return ans;
  }
};

// Time Complexity: O(nlogn)
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
  }
};