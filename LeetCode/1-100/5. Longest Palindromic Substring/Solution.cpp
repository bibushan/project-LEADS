class Solution {
public:
  string longestPalindrome(string s) {
    int start = 0;
    int maxLen = 1;
    int n = s.size();
    int begin;
    int end;
    for (int i = 0; i < n; ++i) {
      begin = i - 1;
      end = i + 1;
      while (begin > -1 && end < n) {
        if (s[begin] == s[end]) {
          begin--;
          end++;
        } else {
          break;
        }
      }
      if (end - begin - 1 > maxLen) {
        start = begin + 1;
        maxLen = end - begin - 1;
      }
    }
    for (int i = 0; i < n - 1; ++i) {
      if (s[i] != s[i + 1]) {
        continue;
      }
      begin = i - 1;
      end = i + 2;
      while (begin > -1 && end < n) {
        if (s[begin] == s[end]) {
          begin--;
          end++;
        } else {
          break;
        }
      }
      if (end - begin - 1 > maxLen) {
        start = begin + 1;
        maxLen = end - begin - 1;
      }
    }
    return s.substr(start, maxLen);
  }
};