// Optimised DP without additional memory
class Solution {
    public int climbStairs(int n) {
        if (n == 1)
            return 1;
        int one = 1;
        int two = 2;
        for (int i = 3; i <= n; i++) {
            int current = one + two;
            one = two;
            two = current;
        }
        return two;
    }
}

// Bottom Up Approach
class Solution {
    public int climbStairs(int n) {
        if (n <= 2)
            return n;

        int dp[] = new int[n];
        dp[0] = 1;
        dp[1] = 2;
        for (int i = 3; i <= n; i++)
            dp[i - 1] = dp[i - 2] + dp[i - 3];

        return dp[n - 1];
    }
}
