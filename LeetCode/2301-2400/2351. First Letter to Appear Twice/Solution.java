class Solution {
    public char repeatedCharacter(String s) {
        HashSet<Character> set = new HashSet<Character>();
        
        for(char ch: s.toCharArray()) {
            if(set.contains(ch) == false)
                set.add(ch);
            else if(set.contains(ch) == true)
                return ch;
        }
        return 'a';
    }
}