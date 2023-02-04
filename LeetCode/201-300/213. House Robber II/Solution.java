// Memoization
class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return nums[0];

        int[] memo1 = new int[n];
        int[] memo2 = new int[n];
        Arrays.fill(memo1, -1);
        Arrays.fill(memo2, -1);

        int removeFirst = robMax(nums, memo1, n, 1);
        int removeLast = robMax(nums, memo2, n - 1, 0);
        return Math.max(removeFirst, removeLast);

    }

    public int robMax(int[] nums, int[] memo, int n, int idx) {
        if (idx >= n)
            return 0;
        if (memo[idx] >= 0)
            return memo[idx];
        if (idx < 0)
            return 0;
        int pick = robMax(nums, memo, n, idx + 2) + nums[idx];
        int notPicked = robMax(nums, memo, n, idx + 1);

        return memo[idx] = Math.max(pick, notPicked);
    }
}

// Tabulation
class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return nums[0];
        int[] dp1 = new int[n + 1];
        int[] dp2 = new int[n + 1];
        Arrays.fill(dp1, -1);
        Arrays.fill(dp2, -1);

        int removeFirst = robMax(nums, dp1, n, 1);
        int removeLast = robMax(nums, dp2, n - 1, 0);

        return Math.max(removeFirst, removeLast);
    }

    public int robMax(int[] nums, int[] dp, int n, int start) {
        dp[start] = nums[start];
        for (int i = start + 1; i < n; i++) {
            int pick = nums[i];
            if (i != start + 1)
                pick += dp[i - 2];
            int notPicked = dp[i - 1];
            dp[i] = Math.max(pick, notPicked);
        }
        return dp[n - 1];
    }
}

// Space Optimised DP
class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return nums[0];

        int removeFirst = robMax(nums, n, 1);
        int removeLast = robMax(nums, n - 1, 0);

        return Math.max(removeFirst, removeLast);
    }

    public int robMax(int[] nums, int n, int start) {
        int prev2 = 0, prev1 = nums[start];
        for (int i = start + 1; i < n; i++) {
            int pick = nums[i] + prev2;
            int notPicked = prev1;

            int curr = Math.max(pick, notPicked);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
}