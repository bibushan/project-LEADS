class Solution {
    public String frequencySort(String s) {
        int[] freq = new int['z' - '0' + 1];

        for (int i = 0; i < 26; i++) {
            freq[i] = 0;
        }

        for (int i = 0; i < s.length(); i++) {
            freq[s.charAt(i) - '0']++;
        }

        List<int[]> list = new ArrayList<>();
        for (int i = 0; i < freq.length; i++) {
            list.add(new int[] { i, freq[i] });
        }

        Collections.sort(list, (a, b) -> b[1] - a[1]);

        StringBuilder sb = new StringBuilder();
        for (int[] ele : list) {
            char c = (char) (ele[0] + '0');
            for (int i = 0; i < ele[1]; i++)
                sb.append(c);
        }

        return sb.toString();
    }
}