class Solution {
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];
        int row = 0, col = 0, rowEnd = n-1, colEnd = n-1, count = 1;
        
        while(row <= rowEnd && col <= colEnd) {
            for(int i=col; i<=colEnd; i++) {
                matrix[row][i] = count;
                count++;
            }

            for(int j=row+1; j<=rowEnd; j++) {
                matrix[j][colEnd] = count;
                count++;
            }

            for(int i=colEnd-1; i>=col; i--) {
                if(row == rowEnd)
                    break;

                matrix[rowEnd][i] = count;
                count++;
            }

            for(int j=rowEnd-1; j>=row+1; j--) {
                if(col == colEnd)
                    break;

                matrix[j][col] = count;
                count++;
            }

            col++;
            row++;
            rowEnd--;
            colEnd--;
        }

        return matrix;
    }
}