// Brute Force
class Solution {
    public boolean isSubsequence(String s, String t) {
        int j = 0;
        for (int i = 0; i < t.length() && j < s.length(); i++) {
            if (s.charAt(j) == t.charAt(i))
                j++;
        }
        return j == s.length();
    }
}

// Two Pointer Approach
class Solution {
    public boolean isSubsequence(String s, String t) {
        int sPointer = 0, tPointer = 0;
        while (sPointer < s.length() && tPointer < t.length()) {
            if (s.charAt(sPointer) == t.charAt(tPointer)) {
                sPointer++;
                tPointer++;
            } else
                tPointer++;
        }

        return sPointer == s.length();
    }
}

// Recursion
class Solution {
    public boolean isSubsequence(String s, String t) {
        return s.length() == helper(s, t, s.length(), t.length());
    }

    public int helper(String s, String t, int i, int j) {
        if (i == 0 || j == 0)
            return 0;
        if (s.charAt(i - 1) == t.charAt(j - 1))
            return 1 + helper(s, t, i - 1, j - 1);
        else
            return helper(s, t, i, j - 1);
    }
}