class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
            int n = nums.size();
    
            stack<int> stk;
            vector<int> ans(n, -1);
    
            for(int i = (2*n - 1); i>=0; i--) {
                int idx = i % n;
                while(!stk.empty() && stk.top() <= nums[idx])
                    stk.pop();
                
                if(!stk.empty())
                    ans[idx] = stk.top();
    
                stk.push(nums[idx]);
            }
            return ans;
        }
    };