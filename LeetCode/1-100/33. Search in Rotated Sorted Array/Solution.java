class Solution {
    public int search(int[] nums, int target) {
        int beforePivot = BinarySearch(nums, target, 0, findPivot(nums));
        int afterPivot = BinarySearch(nums, target, findPivot(nums) + 1, nums.length - 1);

        if (beforePivot == -1 && afterPivot == -1)
            return -1;

        if (beforePivot == -1 && afterPivot != -1)
            return afterPivot;
        else
            return beforePivot;
    }

    int findPivot(int[] nums) {
        int i;
        for (i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i - 1])
                break;
        }
        return i - 1;
    }

    int BinarySearch(int[] nums, int target, int low, int high) {
        if (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                return BinarySearch(nums, target, low, mid - 1);
            else
                return BinarySearch(nums, target, mid + 1, high);
        }
        return -1;
    }
}