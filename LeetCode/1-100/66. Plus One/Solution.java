class Solution {
    public int[] plusOne(int[] digits) {
        int i = digits.length - 1;
        while (i >= 0) {
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
            i--;
        }
        int[] arr = new int[digits.length + 1];
        arr[0] = 1;
        System.arraycopy(digits, 0, arr, 1, digits.length);
        return arr;
    }
}
