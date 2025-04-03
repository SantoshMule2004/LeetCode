class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> anagram;

        for (auto s : strs)
        {
            string substr = s;
            sort(substr.begin(), substr.end());
            anagram[substr].push_back(s);
        }

        for (auto a : anagram)
            ans.push_back(a.second);

        return ans;
    }
};