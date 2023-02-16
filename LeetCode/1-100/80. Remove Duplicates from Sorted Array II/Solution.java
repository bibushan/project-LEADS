// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0;
        if (nums.length <= 2)
            return nums.length;
        for (int i = 0; i < nums.length; i++) {
            if (i < 2 || nums[i] != nums[k - 2]) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
}