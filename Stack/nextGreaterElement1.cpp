class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            
            int n = nums2.size();
            stack<int> stk;
            unordered_map<int, int> um;
            vector<int> ans;
    
            for(int i=(n - 1); i>=0; i--) {
                while(!stk.empty() && stk.top() < nums2[i])
                    stk.pop();
    
                um[nums2[i]] = stk.empty() ? -1 : stk.top();
                stk.push(nums2[i]);
            }
    
            for(auto n : nums1) 
                ans.push_back(um[n]);
    
            return ans;
        }
    };