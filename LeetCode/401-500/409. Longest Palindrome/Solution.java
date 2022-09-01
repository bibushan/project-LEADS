class Solution {
    public int longestPalindrome(String s) {
        int length=0;
        HashSet<Character> h = new HashSet<>();
  
        for(int ind =0; ind<s.length(); ind++){
            char Character = s.charAt(ind);
            if(h.contains(Character)){
                length+=2;
                h.remove(Character);
            }else{
                h.add(Character);
            }
        }
        if(h.size()>0){
            length++;
        }
        return length;
    
    }
}