class Solution {
  public int maxSubArray(int[] nums) {
    int currMaxSum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < nums.length; i++) {
      currMaxSum = Math.max(currMaxSum + nums[i], nums[i]);
      maxSum = Math.max(maxSum, currMaxSum);
    }
    return maxSum;
  }
}