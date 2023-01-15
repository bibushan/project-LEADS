public class Solution {
    public String[] fizzBuzz(int A) {
        String[] ans = new String[A];
        int j = 0;
        for(int i=1; i<=A; i++) {
            if(i%3 == 0 && i%5 != 0) {
                ans[j] = "Fizz";
            }
            else if(i%3 != 0 && i%5 == 0) {
                ans[j] = "Buzz";
            }
            else if(i%3 == 0 && i%5 == 0) {
                ans[j] = "FizzBuzz";
            }
            else {
                ans[j] = Integer.toString(i);
            }
            j++;
        }
        return ans;
    }
}
