class Solution {
    public:
    
        struct compareFirst{
            bool operator()(const vector<int> &a, vector<int> &b) {
                return a[0] < b[0];
            }
        };
    
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
            int n = intervals.size();
            vector<vector<int>> ans;
            stack<vector<int>> stk;
    
            sort(intervals.begin(), intervals.end(), compareFirst());
    
            for(int i=0; i<n;i++) {
                if(!stk.empty() && intervals[i][0] <= stk.top()[1])
                    stk.top()[1] = max(stk.top()[1], intervals[i][1]);
                else 
                    stk.push(intervals[i]);
            }
    
            while(!stk.empty()) {
                ans.push_back(stk.top());
                stk.pop();
            }
            return ans;
        }
    };