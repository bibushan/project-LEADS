class Solution {
  public void setZeroes(int[][] matrix) {
    boolean zeroCol = false;
    boolean zeroRow = false;
    for (int i = 0; i < matrix.length; i++) {
      for (int j = 0; j < matrix[0].length; j++) {
        if (matrix[i][j] == 0) {
          if (j > 0)
            matrix[0][j] = 0;
          if (i > 0)
            matrix[i][0] = 0;
          if (j == 0)
            zeroCol = true;
          if (i == 0)
            zeroRow = true;
        }
      }
    }

    // setting the rows to 0
    for (int i = 1; i < matrix.length; i++) {
      if (matrix[i][0] == 0) {
        for (int j = 1; j < matrix[i].length; j++)
          matrix[i][j] = 0;
      }
    }

    // setting the columns to 0
    for (int i = 1; i < matrix[0].length; i++) {
      if (matrix[0][i] == 0) {
        for (int j = 1; j < matrix.length; j++)
          matrix[j][i] = 0;
      }
    }

    // setting the 0th column to 0
    if (zeroCol) {
      for (int i = 0; i < matrix.length; i++)
        matrix[i][0] = 0;
    }

    if (zeroRow) {
      for (int i = 0; i < matrix[0].length; i++)
        matrix[0][i] = 0;
    }
  }
}

// Space: O(m+n)
/*
 * class Solution {
 * public void setZeroes(int[][] matrix) {
 * HashSet<Integer> row = new HashSet<>();
 * HashSet<Integer> column = new HashSet<>();
 * 
 * for(int i=0; i<matrix.length; i++) {
 * for(int j=0; j<matrix[0].length; j++) {
 * if(matrix[i][j] == 0) {
 * row.add(i);
 * column.add(j);
 * }
 * }
 * }
 * 
 * for(int i: row) {
 * for(int j=0; j<matrix[0].length; j++) {
 * matrix[i][j] = 0;
 * }
 * }
 * 
 * for(int i: column) {
 * for(int j=0; j<matrix.length; j++) {
 * matrix[j][i] = 0;
 * }
 * }
 * }
 * }
 */