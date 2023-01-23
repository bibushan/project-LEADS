class Solution {
    public int[] searchRange(int[] nums, int target) {
        return new int[] { starting(nums, target), ending(nums, target) };
    }

    int starting(int[] nums, int target) {
        int start = 0, ans = -1;
        int end = nums.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }

            if (nums[mid] < target) {
                start = mid + 1;
            }

            if (nums[mid] > target) {
                end = mid - 1;
            }
        }

        return ans;
    }

    int ending(int[] nums, int target) {
        int start = 0, ans = -1;
        int end = nums.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            }

            if (nums[mid] < target) {
                start = mid + 1;
            }

            if (nums[mid] > target) {
                end = mid - 1;
            }
        }

        return ans;
    }
}