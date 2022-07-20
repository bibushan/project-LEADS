class Solution {
public:
    string convertToTitle(int columnNumber) {
        string a = "";
        while(columnNumber) {
            columnNumber--;
            a = (char)(columnNumber%26 + 'A') + a;
            columnNumber /= 26;
        }
        return a;
    }
};