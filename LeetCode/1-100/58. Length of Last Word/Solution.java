/*Runtime: 0 ms, faster than 100.00% of Java online submissions for Length of Last Word.
Memory Usage: 42.1 MB, less than 52.33% of Java online submissions for Length of Last Word.*/

class Solution {
    public int lengthOfLastWord(String s) {
        int count=0, i=s.length()-1;
        char[] arr = s.toCharArray();
        while(arr[i]== ' ')
            i--;
        while(i>=0 && arr[i]!= ' '){
            count++;
            i--;
        }
        return count;
    }
}