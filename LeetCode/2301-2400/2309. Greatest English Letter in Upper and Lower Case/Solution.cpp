class Solution {
public:
    string greatestLetter(string s) {
        vector<int> upper(26,0);
        vector<int> lower(26,0);
        int i=0;
        while(s[i]!='\0'){
            if(s[i]>=65 &&s[i]<=90)
                upper[s[i]-65]++;
            else
                lower[s[i]-97]++;
            i++;
        }
        s="";
        for(int i=0;i<26;++i){
            if(upper.at(i)>0 && lower.at(i)>0)
                s=i+65;       
        }
        return s;
    }
};