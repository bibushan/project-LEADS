class Solution {
public:
  int longestCommonSubsequence(string text1, string text2) {
    int n1 = text1.size();
    int n2 = text2.size();
    int dp[n1][n2];
    dp[0][0] = text1[0] == text2[0] ? 1 : 0;
    for (int j = 1; j < n2; ++j) {
      dp[0][j] = text1[0] == text2[j] ? 1 : dp[0][j - 1];
    }
    for (int i = 1; i < n1; ++i) {
      dp[i][0] = text1[i] == text2[0] ? 1 : dp[i - 1][0];
      for (int j = 1; j < n2; ++j) {
        dp[i][j] = text1[i] == text2[j] ? dp[i - 1][j - 1] + 1
                                        : max(dp[i][j - 1], dp[i - 1][j]);
      }
    }
    return dp[n1 - 1][n2 - 1];
  }
};