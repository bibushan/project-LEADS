class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        stack <char> s1, s2;
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        
        for(int i=0; i<ransomNote.size(); i++)
            s1.push(ransomNote[i]);
        for(int i=0; i<magazine.size(); i++)
            s2.push(magazine[i]);
        
        while(true) {
            if(s1.top() == s2.top()) {
                s1.pop();
                s2.pop();
            }   else {
                s2.pop();
            }
            
            if(s1.empty())
                return true;
            if(s2.empty())
                return false;
        }
        
        return false;
    }
};