class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<priority_queue<int>> heaps;
        for (auto g : grid)
        {
            priority_queue<int> maxH(g.begin(), g.end());
            heaps.push_back(maxH);
        }

        int sum(0);
        for (int i = 0; i < cols; i++)
        {
            int max_val(0);
            for (int j = 0; j < rows; j++)
            {
                if (!heaps[j].empty())
                {
                    int val = heaps[j].top();
                    heaps[j].pop();
                    max_val = max(max_val, val);
                }
            }
            sum += max_val;
        }
        return sum;
    }
};