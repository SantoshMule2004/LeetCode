class Solution {
    public:
        string minRemoveToMakeValid(string s) {
            int len = s.length();
            stack<int> stk;
    
            for(int i=0; i<len; i++) {
                char e = s[i];
                if(e == '(')
                    stk.push(i);
                
                if(e == ')') {
                    if(!stk.empty())
                        stk.pop();
                    else
                        s[i] = '#';
                }
            }
            while(!stk.empty()) {
                s[stk.top()] = '#';
                stk.pop();
            }
    
            string ans = "";
            for(auto c : s)
                if(c != '#')
                    ans.push_back(c);
    
            return ans;
        }
    };