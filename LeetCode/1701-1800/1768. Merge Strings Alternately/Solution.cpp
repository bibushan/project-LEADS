/*
    Time Complexity: O(max(m, n))
    Space Complexity: O(1)
*/
class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int m = word1.size();
    int n = word2.size();
    string res = "";

    for (int i = 0; i < max(m, n); i++) {
      if (i < m)
        res += word1[i];
      if (i < n)
        res += word2[i];
    }

    return res;
  }
};

class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    int i = 0, j = 0;
    string res = "";
    while (i < word1.size() && j < word2.size()) {
      if (word1[i] < word2[j])
        res += word1[i++];
      else
        res += word2[j++];
    }
    while (i < word1.size()) {
      res += word1[i];
    }
    while (j < word2.size()) {
      res += word2[j];
    }
    return res;
  }
};