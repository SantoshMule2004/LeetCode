class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<vector<int>> ans;
        vector<int> d1, d2;

        set<int> s1, s2;

        for (auto n : nums1)
            s1.insert(n);

        for (auto n : nums2)
            s2.insert(n);

        for (auto n : s1)
            if (!s2.count(n))
                d1.push_back(n);

        for (auto n : s2)
            if (!s1.count(n))
                d2.push_back(n);

        ans.push_back(d1);
        ans.push_back(d2);

        return ans;
    }
};