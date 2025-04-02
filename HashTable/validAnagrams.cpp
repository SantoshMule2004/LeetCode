class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> um;

        for (auto const &c : s)
            um[c]++;

        for (auto const &c : t)
            if (um.find(c) != um.end())
                um[c]--;

        for (auto const &c : um)
            if (c.second > 0)
                return false;

        return true;
    }
};