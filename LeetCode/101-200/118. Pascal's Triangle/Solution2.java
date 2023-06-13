class Solution {
    public List<Integer> generateRow(int n) {
        List<Integer> row = new ArrayList<Integer>();
        int ans = 1;
        row.add(ans);
        for (int j = 1; j < n; j++) {
            ans *= (n - j);
            ans /= j;
            row.add(ans);
        }
        return row;
    }

    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        for (int i = 1; i <= numRows; i++) {
            res.add(generateRow(i));
        }
        return res;
    }
}