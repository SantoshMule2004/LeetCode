class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int len = s.length();
        unordered_set<char> set;

        int r(0), l(0), cnt(0);
        while (r < len)
        {
            if (!set.count(s[r]))
            {
                set.insert(s[r]);
                cnt = max(cnt, r - l + 1);
                r++;
            }
            else
            {
                set.erase(s[l]);
                l++;
            }
        }
        return cnt;
    }
};