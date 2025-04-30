class Solution {
    public:
        vector<int> numberGame(vector<int>& nums) {
            priority_queue<int, vector<int>, greater<>> minH(nums.begin(), nums.end());
            vector<int> arr;
    
            while(!minH.empty()) {
                int alice = minH.top(); minH.pop();
                int bob = minH.top(); minH.pop();
    
                arr.push_back(bob);
                arr.push_back(alice);
            }
            return arr;
        }
    };