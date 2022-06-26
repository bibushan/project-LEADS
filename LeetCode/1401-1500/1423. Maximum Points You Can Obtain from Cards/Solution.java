class Solution {
  public int maxScore(int[] cardPoints, int k) {
    int sum = 0;
    for (int i = 0; i < cardPoints.length; i++)
      sum += cardPoints[i];

    int temp = 0;
    int i = 0, j = 0;

    while (j + k < cardPoints.length)
      temp += cardPoints[j++];

    int max = sum - temp;

    while (j < cardPoints.length) {
      temp += (cardPoints[j++] - cardPoints[i++]);
      max = max < sum - temp ? sum - temp : max;
    }

    return max;
  }
}