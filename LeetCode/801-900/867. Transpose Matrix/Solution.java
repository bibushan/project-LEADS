# Runtime: 0 ms, faster than 100.00% of Java online submissions for Transpose Matrix.
# Memory Usage: 49.2 MB, less than 5.34% of Java online submissions for Transpose Matrix.

class Solution {
    public int[][] transpose(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int[][] temp= new int[m][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                temp[j][i]=matrix[i][j];
            }
        }
        return temp;
    }
}