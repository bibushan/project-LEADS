class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int pointer1 = m - 1;
    int pointer2 = n - 1;
    for (int i = m + n - 1; i > -1; i--) {
      if ((pointer2 > -1) &&
          ((pointer1 < 0) || nums1[pointer1] < nums2[pointer2])) {
        nums1[i] = nums2[pointer2];
        pointer2--;
      } else {
        nums1[i] = nums1[pointer1];
        pointer1--;
      }
    }
  }
};
