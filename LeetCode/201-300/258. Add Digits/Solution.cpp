/*Runtime: 10 ms, faster than 8.23% of C++ online submissions for Add Digits.
Memory Usage: 5.8 MB, less than 95.46% of C++ online submissions for Add
Digits.*/

class Solution {
public:
  int addDigits(int num) {
    while (num > 9) {
      int res = 0;
      while (num > 0) {
        res += num % 10;
        num /= 10;
      }
      num = res;
    }
    return num;
  }
};