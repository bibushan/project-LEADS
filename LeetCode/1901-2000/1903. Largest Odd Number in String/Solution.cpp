class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.length() - 1;
        while(i >= 0 and (num[i]-'0')%2 == 0)
            i--;
        return num.substr(0,i+1);
    }
};