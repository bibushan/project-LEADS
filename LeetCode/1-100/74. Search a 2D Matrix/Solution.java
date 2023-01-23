class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix == null || matrix[0] == null)
            return false;
        
        int m = matrix.length, n = matrix[0].length;
        int left = 0, right = m*n - 1;

        while(left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / n, col = mid % n;
            if(matrix[row][col] == target)
                return true;
            if (matrix[row][col] < target) 
                left = mid + 1;
            else 
                right = mid - 1;
        }
        return false;
    }
}