class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> um;
            queue<int> q;
            for(int i=0;i <s.length(); i++) {
                um[s[i]]++;
                q.push(i);
    
                while(!q.empty() && um[s[q.front()]] > 1)
                    q.pop();
            }
            return q.empty() ? -1 : q.front();
        }
    };