class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> stk;
            for(auto t : tokens) {
                if((t == "+") || (t == "-") || (t == "*") || (t == "/") && !stk.empty()) {
                    int rgt = stk.top();
                    stk.pop();
                    int lft = stk.top();
                    stk.pop();
    
                    if(t == "+")
                        stk.push(lft + rgt);
    
                    if(t == "-")
                        stk.push(lft - rgt);
    
                    if(t == "*")
                        stk.push(lft * rgt);
    
                    if(t == "/")
                        stk.push(lft / rgt);
                }
                else {
                    stk.push(stoi(t));
                }
            }
            return stk.top();
        }
    };