class Solution {
    public double calculateTax(int[][] brackets, int income) {
        int i=0, prevSlab=0;
        double tax = 0.00;
        while(income>0) {
            if(income > brackets[i][0])
                tax += (brackets[i][0]-prevSlab)*brackets[i][1]*(1.00/100);
            else {
                tax += (income-prevSlab)*brackets[i][1]*1.00/100;
                return tax;
            }
            prevSlab = brackets[i][0];
            i++;
        }
        return 0.00;
    }
}