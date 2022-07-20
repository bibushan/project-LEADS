class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        long f = 1;
        for(int i = columnTitle.size() - 1 ; i >= 0; i--) {
            number += f*(columnTitle[i] - 'A' + 1);
            f *= 26;
        }
        return number;
    }
};