class Solution {
public:
    char findTheDifference(string s, string t) {
        char arr[26] = {0};
        for (char curr: s) {
            arr[curr - 'a']++;
        }
        for (char curr: t) {
            arr[curr - 'a']--;
        }
        for (int i = 0; i < 26; ++i) {
            if (arr[i]) {
                return 'a' + i;
            }
        }
        return 0;
    }
};