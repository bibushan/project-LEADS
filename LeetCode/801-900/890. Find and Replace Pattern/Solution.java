class Solution {
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        List<String> res = new ArrayList<>();
        HashMap<Character, Character> map = new HashMap<>();
        for (String word : words) {
            boolean[] isCharPresent = new boolean[26];
            map.clear();
            if (word.length() != pattern.length())
                continue;
            boolean flag = true;
            for (int j = 0; j < word.length(); j++) {
                char charPattern = pattern.charAt(j);
                char charWord = word.charAt(j);
                if (map.containsKey(charPattern)) {
                    if (map.get(charPattern) != charWord) {
                        flag = false;
                        break;
                    }
                } else {
                    if (isCharPresent[charWord - 'a']) {
                        flag = false;
                        break;
                    }
                    map.put(charPattern, charWord);
                    isCharPresent[charWord - 'a'] = true;
                }
            }

            if (flag == true)
                res.add(word);
        }
        return res;
    }
}