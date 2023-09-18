/*
Time Complexity: (nlogn)
Space Complexity: O(1)
*/

class Solution {
public:
  static int noOf1s(int num) {
    int count = 0;
    while (num > 0) {
      num &= (num - 1);
      count++;
    }
    return count;
  }

  static bool compare(int a, int b) {
    int p = noOf1s(a);
    int q = noOf1s(b);
    if (p == q)
      return (a <= b);
    else
      return (p < q);
  }

  vector<int> sortByBits(vector<int> &arr) {
    sort(arr.begin(), arr.end(), compare);
    return arr;
  }
};