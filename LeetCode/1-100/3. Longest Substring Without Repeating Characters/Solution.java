class Solution {
    public int lengthOfLongestSubstring(String s) {
        int a = 0, b = 0, maxCount = 0;
        HashSet<Character> set = new HashSet();
        while (b < s.length()) {
            if (set.contains(s.charAt(b)) == false) {
                set.add(s.charAt(b));
                b++;
                maxCount = Math.max(set.size(), maxCount);
            } else {
                set.remove(s.charAt(a));
                a++;
            }
        }

        return maxCount;
    }
}