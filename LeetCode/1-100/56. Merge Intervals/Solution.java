// Time Complexity: O(logn)
// Space Complexity: O(n); n being the no of arrays passed as input

class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a, b) -> (a[0] - b[0]));
        if (intervals.length == 0)
            return new int[0][0];

        List<int[]> res = new ArrayList<>();
        int start = intervals[0][0];
        int end = intervals[0][1];
        for (int[] i : intervals) {
            if (i[0] <= end) {
                end = Math.max(end, i[1]);
            } else {
                res.add(new int[] { start, end });
                start = i[0];
                end = i[1];
            }
        }
        res.add(new int[] { start, end });
        return res.toArray(new int[0][0]);
    }
}