class Solution {
    public String multiply(String num1, String num2) {
        int[] ans = new int[num1.length() + num2.length()];
        int index = ans.length - 1;
        for (int i = num2.length() - 1; i >= 0; i--) {
            for (int j = num1.length() - 1; j >= 0; j--) {
                ans[index] += (num2.charAt(i) - 48) * (num1.charAt(j) - 48);
                ans[index - 1] += ans[index] / 10;
                ans[index] %= 10;
                index--;
            }
            index = ans.length - 1 - (num2.length() - i);
        }
        StringBuilder sb = new StringBuilder();
        index = 0;
        while (index < ans.length) {
            if (ans[index] == 0) {
                index++;
            } else {
                break;
            }
        }
        if (index >= ans.length) {
            return "0";
        }
        for (int i = index; i < ans.length; i++) {
            sb.append(ans[i]);
        }
        return sb.toString();
    }
}