class Solution {
public:
  bool isHappy(int n) {
    set<int> set;
    while (set.count(n) == 0) {
      if (n == 1)
        return true;
      int temp = 0;
      set.insert(n);
      while (n) {
        temp += (n % 10) * (n % 10);
        n /= 10;
      }
      n = temp;
    }
    return false;
  }
};