class Solution {
    public int titleToNumber(String columnTitle) {
        int i = 0, number = 0;
        while(i < columnTitle.length()) 
            number = number*26 + columnTitle.charAt(i++)-64;
        return number;
    }
}