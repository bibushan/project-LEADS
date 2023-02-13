// Time COmplexity: O(n)
// Space Complexity: O(n)
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] ans = new int[nums.length];
        Arrays.fill(ans, 1);
        for (int i = 1; i < nums.length; i++)
            ans[i] = ans[i - 1] * nums[i - 1];
        for (int i = nums.length - 1, suffixProd = 1; i >= 0; i--) {
            ans[i] *= suffixProd;
            suffixProd *= nums[i];
        }
        return ans;
    }
}

/// Method-2: if we use the division operator

class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length, total = 1, flag = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                total = total * nums[i];
            else
                flag += 1;
        }
        for (int i = 0; i < n; i++) {
            if (flag > 1) {
                nums[i] = 0;
            } else if (flag == 1) {
                if (nums[i] != 0)
                    nums[i] = 0;
                else
                    nums[i] = total;
            } else {
                nums[i] = total / nums[i];
            }
        }
        return nums;
    }
}