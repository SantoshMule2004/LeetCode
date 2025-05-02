class Solution {
    public:
        string frequencySort(string s) {
            unordered_map<char, int> um;
            priority_queue<pair<int, char>> maxH;
    
            string ans = "";
    
            for (auto c : s)
                um[c]++;
    
            for (auto [ch, count] : um)
                maxH.push({count, ch});
    
            while(!maxH.empty()) {
                ans += string(maxH.top().first, maxH.top().second);
                maxH.pop();
            }
            return ans;
        }
    };