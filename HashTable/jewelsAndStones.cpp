class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> um;

        for (auto const &j : jewels)
            um[j]++;

        int cnt(0);
        for (auto const &s : stones)
        {
            if (um.find(s) != um.end())
                cnt += um[s];
        }
        return cnt;
    }
};