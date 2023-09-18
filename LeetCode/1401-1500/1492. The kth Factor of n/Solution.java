// TC: O(N)
class Solution {
    public int kthFactor(int n, int k) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
            if (k == count)
                return i;
        }
        return -1;
    }
}

// TC: O(sqrt(n))
class Solution {
    public int kthFactor(int n, int k) {
        int i = 1;
        for (; i * i <= n; i++) {
            if (n % i == 0) {
                if (k == 1) {
                    return i;
                }
                k--;
            }
        }
        i--;
        for (; i >= 1; i--) {
            if (i * i == n) {
                continue;
            }
            if (n % i == 0) {
                if (k == 1) {
                    return n / i;
                }
                k--;
            }
        }
        return -1;
    }
}