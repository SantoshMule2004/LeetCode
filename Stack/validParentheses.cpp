class Solution {
    public:
        bool isValid(string s) {
            stack<char> stk;
    
            for(auto const &c : s) {
                if(c == '(' || c == '[' || c == '{')
                    stk.push(c);
                else {
                    if(stk.empty()) return false;
    
                    if((c == ')' && stk.top() == '(') || (c == ']' && stk.top() == '[') || (c == '}' && stk.top() == '{'))
                        stk.pop();
                    else
                        return false;
                }
            }
            return stk.empty();
        }
    };