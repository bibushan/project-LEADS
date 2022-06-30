class Solution {
  public int[][] reconstructQueue(int[][] people) {
    int n = people.length;
    int[][] result = new int[n][2];

    for (int i = 0; i < n; i++) {
      Arrays.fill(result[i], -1);
    }

    Arrays.sort(people, (a, b) -> a[0] - b[0]);

    for (int[] person : people) {
      int cnt = person[1];

      for (int i = 0; i < n; i++) {
        if (result[i][0] == -1 && cnt == 0) {
          result[i][0] = person[0];
          result[i][1] = person[1];
          break;
        } else if (result[i][1] == -1 || result[i][0] >= person[0]) {
          cnt--;
        }
      }
    }

    return result;
  }
}