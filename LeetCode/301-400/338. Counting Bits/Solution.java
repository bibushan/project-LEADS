// TC: O(n logn)
class Solution {
    public int[] countBits(int n) {
        int[] res = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            int x = 0, idx = i;
            while (idx != 0) {
                x += idx & 1;
                idx = idx >> 1;
            }
            res[i] = x;
        }
        return res;
    }
}