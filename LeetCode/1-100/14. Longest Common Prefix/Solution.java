class Solution {
    public String longestCommonPrefix(String[] strs) {
        if(strs == null || strs.length == 0) 
            return "";
        if(strs.length == 1) 
            return strs[0];
        String result = commonPrefix(strs[0], strs[1]);
        for(int i = 2; i < strs.length; i++){
            result = commonPrefix(result, strs[i]);
        }
        return result;
    }
    private String commonPrefix(String s1, String s2){
        if(s1 == null || s2 == null) 
            return "";
        int len = s1.length();
        for(int i = len; i >= 0; i--){
            String prefix = s1.substring(0, i);
            if(s2.startsWith(prefix)) 
                return prefix;
        }
        return "";
    }
}