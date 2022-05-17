class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2 != 0)
        {
            return false;
        }
        stack<char> stack;
        for(char c:s){
            switch(c){
                case '(':   stack.push(c);
                            break;
                case '{':   stack.push(c);
                            break;
                case '[':   stack.push(c);
                            break;
                case ')':   if(stack.empty() || stack.top()!='(')
                             { 
                                return false;
                             }
                            else{
                              stack.pop(); 
                              break;
                            }
                case '}':   if(stack.empty() || stack.top()!='{')
                            { 
                                return false;
                            }
                            else{
                              stack.pop(); 
                              break;
                            }
                case ']':   if(stack.empty() || stack.top()!='[')
                            { 
                                return false;
                            }
                            else{
                              stack.pop(); 
                              break;
                            }
            }
        }
            return stack.empty() ;
    }
};
