class Solution {
    public int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a1 = (ax2 - ax1) * (ay2 - ay1);
        int a2 = (bx2 - bx1) * (by2 - by1);

        int x5 = Math.max(ax1, bx1);
        int y5 = Math.max(ay1, by1);
        int x6 = Math.min(ax2, bx2);
        int y6 = Math.min(ay2, by2);

        int x = x6 - x5;
        int y = y6 - y5;
        int a3 = x * y;
        if (x < 0 || y < 0) {
            a3 = 0;
        }

        return a1 + a2 - a3;
    }
}