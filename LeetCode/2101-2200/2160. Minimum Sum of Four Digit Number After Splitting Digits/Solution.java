// Time Complexity: O(nlogn)

class Solution {
    public int minimumSum(int num) {
        char[] n = Integer.toString(num).toCharArray();
        String num1 = "", num2 = "";
        Arrays.sort(n);
        for (int i = 0; i < n.length; i++) {
            if (i % 2 == 0) {
                num1 += n[i];
            } else {
                num2 += n[i];
            }
        }

        return Integer.parseInt(num1) + Integer.parseInt(num2);
    }
}

class Solution {
    public int minimumSum(int num) {
        int[] nums = new int[4];
        int i = 0;
        while (i <= 3) {
            nums[i++] = num % 10;
            num /= 10;
        }
        Arrays.sort(nums);
        return nums[0] * 10 + nums[2] + nums[1] * 10 + nums[3];
    }
}