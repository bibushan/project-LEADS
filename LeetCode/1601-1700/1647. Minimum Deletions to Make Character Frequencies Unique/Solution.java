class Solution {
  public int minDeletions(String s) {
    int[] freq = new int[26];
    for (char c : s.toCharArray())
      freq[c - 'a']++;
    int res = 0;
    Set<Integer> set = new HashSet<>();
    for (int i = 0; i < 26; i++) {
      if (freq[i] == 0)
        continue;
      if (!set.add(freq[i])) {
        int k = 0;
        while (k != freq[i] && set.contains(freq[i] - k)) {
          k++;
        }
        if (freq[i] != k)
          set.add(freq[i] - k);
        res += k;
      }
    }
    return res;
  }
}