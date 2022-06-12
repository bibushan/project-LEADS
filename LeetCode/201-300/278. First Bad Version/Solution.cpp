/*Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad
Version. Memory Usage: 5.7 MB, less than 89.63% of C++ online submissions for
First Bad Version.*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
  int firstBadVersion(int n) {
    if (n == 1)
      return 1;
    int l = 0;
    int r = n - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (isBadVersion(mid) == true && isBadVersion(mid - 1) == false)
        return mid;
      else if (isBadVersion(mid) == false)
        l = mid + 1;
      else if (isBadVersion(mid) == true)
        r = mid - 1;
    }
    return n;
  }
};