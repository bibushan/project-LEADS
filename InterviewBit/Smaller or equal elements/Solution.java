public class Solution {
    public int solve(int[] A, int B) {
        int i = 0, j = A.length - 1, mid, count = 0;
        while (i <= j) {
            mid = i + (j - i) / 2;
            if (A[mid] == B) {
                count = mid;
                i = mid + 1;
            } else if (A[mid] < B) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }

        if (count != 0)
            return count + 1;
        else
            return i;
    }
}
