class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
    
            if(nums.size() < 2) return nums;
    
            unordered_map<int, int> um;
            vector<int> ans;
    
            for(auto n : nums)
                um[n]++;
    
            // ************* using max heap *************************
            // priority_queue<pair<int, int>> maxH;
            // for(auto& [num, count] : um)
            //     maxH.push({count, num});
    
            // int i = 0;
            // while(!maxH.empty() && i<k) {
            //     ans.push_back(maxH.top().second);
            //     maxH.pop();
            //     i++;
            // }
    
            // ************** using min heap **************
            priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minH;
            for(auto& [num, count] : um) {
                minH.push({count, num});
                if(minH.size() > k)
                    minH.pop();
            }
    
            while(!minH.empty()) {
                ans.push_back(minH.top().second);
                minH.pop();
            }
            return ans;
        }
    };