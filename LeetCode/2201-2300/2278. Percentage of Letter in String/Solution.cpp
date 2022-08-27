class Solution {
public:
    int percentageLetter(string s, char letter) {
        int letterCount = 0;
        int count = s.length();
        for(int i=0; i<count; i++) {
            if(s[i] == letter)
                letterCount++;
        }
        int percent = (letterCount * 100) / count;
        return percent;
    }
};