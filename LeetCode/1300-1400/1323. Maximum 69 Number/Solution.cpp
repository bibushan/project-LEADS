class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='9'){
                s[i]='6';
                if(max<stoi(s)){
                    max=stoi(s);
                }
                s[i]='9';
            }
            else{
                s[i]='9';
                if(max<stoi(s)){
                    max=stoi(s);
                }
                s[i]='6';
            }
            
        }
        return max;
    }
};