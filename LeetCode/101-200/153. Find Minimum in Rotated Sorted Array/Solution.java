// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;

        if (nums[0] <= nums[n - 1])
            return nums[0];

        int l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (nums[m] > nums[r])
                l = m + 1;
            else
                r = m;
        }
        return nums[l];
    }
}