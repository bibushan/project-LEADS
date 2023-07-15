/*
  DUTCH NATIONAL FLAG ALGORITHM

  Time Complexity: O(N)
  Space Complexity: O(1)
*/
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
      if (nums[mid] == 0) {
        swap(nums[low], nums[mid]);
        low++;
        mid++;
      } else if (nums[mid] == 1) {
        mid++;
      } else if (nums[mid] == 2) {
        swap(nums[mid], nums[high]);
        high--;
      }
    }
  }
};

/*
  Time Complexity: O(2N)
  Space COmplexity: O(1)
*/
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