class Solution {
public:
    int arrangeCoins(int n) {
        int count=1;
        while(n >= count) {
            n -= count;
            count++;
        }
        return count-1;
    }
};