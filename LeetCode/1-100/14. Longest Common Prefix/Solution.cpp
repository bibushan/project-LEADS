/*
     Time Complexity: O(N)  // We go through every charcter in every string
     Space Complexity: O(1)
*/

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string res = "";
    for (int i = 0; i < strs[0].length(); i++) {
      for (auto s : strs) {
        if (i == s.length() || s[i] != strs[0][i])
          return res;
      }
      res += strs[0][i];
    }
    return res;
  }
};

// Another approach
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string common = strs[0];
    int minLen = strs[0].length();
    for (int i = 0; i < strs.size(); i++) {
      if (strs[i].length() < minLen) {
        minLen = strs[i].length();
      }
    }
    int i = 0;
    while (i < minLen) {
      char currCharacter = strs[0][i];
      for (int j = 1; j < strs.size(); j++) {
        if (currCharacter == strs[j][i])
          continue;
        else
          return common.substr(0, i);
      }
      i++;
      common += strs[0][i];
    }

    return common.substr(0, i);
  }
};