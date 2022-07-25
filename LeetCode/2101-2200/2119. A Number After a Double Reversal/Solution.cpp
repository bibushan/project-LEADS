class Solution {
public:
    bool isSameAfterReversals(int num) {
        int rev1 = reverse(num);
        int rev2 = reverse(rev1);
        return rev2==num;
    }
    
    int reverse(int num) {
        int rev=0, rem;
        while(num) {
            rem = num%10;
            rev = 10*rev + rem;
            num /= 10;
        }
        return rev;
    }
};