class Solution {
    public String interpret(String command) {
        char[] str = command.toCharArray();
        String res = "";
        for(int i=0; i<str.length; i++) {
            if(str[i] == 'G')
                res += 'G';
            else if(str[i] == '('  && str[i+1] == ')')
                res += 'o';
            else if(str[i] == '('  && str[i+1] == 'a')
                res += "al";
        }
        return res;
    }
}