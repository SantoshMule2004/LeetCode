class Solution {
    public:
        int firstUniqChar(string s) {
            unordered_map<char, int> um;
    
            for(auto c : s)
                um[c]++;
    
            for(int i=0;i <s.length(); i++)
                if(um[s[i]] < 2)
                    return i;
    
            return -1;
        }
    };