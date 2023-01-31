class Solution {
    public int rob(int[] nums) {
        int prev1 = 0;
        int prev2 = 0;
        for(int val: nums) {
            int temp = prev1;
            prev1 = Math.max(prev2+val, prev1);
            prev2 = temp;
        }
        return prev1;
    }
}