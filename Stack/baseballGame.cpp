class Solution {
    public:
        int calPoints(vector<string>& operations) {
    
            stack<int> stk;
            for (auto i : operations) {
                if ((i == "C") || (i == "D") || (i == "+") && !stk.empty()) {
                    if (i == "C")
                        stk.pop();
    
                    if (i == "D")
                        stk.push(stk.top() * 2);
    
                    if (i == "+") {
                        int rgt = stk.top();
                        stk.pop();
                        int lft = stk.top();
                        stk.push(rgt);
                        stk.push(lft + rgt);
                    }
                } else
                    stk.push(stoi(i));
            }
            int sum = 0;
            while (!stk.empty()) {
                sum += stk.top();
                stk.pop();
            }
            return sum;
        }
    };