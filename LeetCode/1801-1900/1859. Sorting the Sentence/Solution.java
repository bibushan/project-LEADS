class Solution {
    public String sortSentence(String s) {
        String[] words = s.split(" ");
        String[] ans = new String[words.length];
        for (String st : words) {
            ans[st.charAt(st.length() - 1) - '1'] = st.substring(0, st.length() - 1);
        }

        return String.join(" ", ans);
    }
}