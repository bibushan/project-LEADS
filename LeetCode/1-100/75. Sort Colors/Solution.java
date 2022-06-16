class Solution {
  public void sortColors(int[] nums) {
    int n = nums.length;
    for (int i = 1; i < n; ++i) {
      int key = nums[i];
      int j = i - 1;
      while (j >= 0 && nums[j] > key) {
        nums[j + 1] = nums[j];
        j = j - 1;
      }
      nums[j + 1] = key;
    }
  }
}