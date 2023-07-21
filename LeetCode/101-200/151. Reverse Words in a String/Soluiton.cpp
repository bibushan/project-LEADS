// Time Complexity: O(N)
// Space Complexity: O(N) N for the result string.

class Solution {
public:
  string reverseWords(string s) {
    int i = 0;
    int n = s.length();

    string res;
    while (i < n) {
      while (i < n &&
             s[i] == ' ') // Skip the empty characters anywhere in the string
        i++;
      if (i >=
          n) // To ensure blank spaces at the end of the string are not added.
        break;
      int j = i + 1;

      // Once we encounter a non-empty character,start j until j reaches a
      // blank character
      while (j < n && s[j] != ' ')
        j++;

      string sub =
          s.substr(i, j - i); // Obtain the word using the pointer i and j-i
      if (res.length() == 0)
        res = sub;
      else
        res = sub + " " + res;

      i = j + 1;
    }
    return res;
  }
};