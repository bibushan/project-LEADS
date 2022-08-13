class Solution {
public:
    bool isLetter(char c) {
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'))
            return true;
        return false;
    }
    
    char lower(char c) {
        if(c>='A' && c<='Z')
            return c+32;
        return c;
    }
    
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        
        while(low <= high) {
            if(!isLetter(s[low])) {
                low++;
                continue;
            }
            
            if(!isLetter(s[high])) {
                high--;
                continue;
            }
            
            if(lower(s[low]) != lower(s[high])) 
                return false;
            
            low++;
            high--;
        }
        
        return true;
    }
};