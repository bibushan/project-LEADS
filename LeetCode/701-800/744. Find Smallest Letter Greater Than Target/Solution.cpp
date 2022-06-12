class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    int l = 0, r = letters.size() - 1;
    char result = letters[0];
    if (target >= letters[r] || target < letters[0])
      return letters[0];

    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (letters[mid] <= target)
        l = mid + 1;
      else {
        result = letters[mid];
        r = mid - 1;
      }
    }
    return result;
  }
};