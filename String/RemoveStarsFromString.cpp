class Solution {
    public:
        string removeStars(string s) {
            string ans;
            
            for(char const &c : s) {
                if(c != '*')
                    ans.push_back(c);
                else
                    ans.pop_back();
            }
            return ans;
        }
    };