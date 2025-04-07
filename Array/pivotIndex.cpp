class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);

        int rSum = sum - nums[0];
        int lSum(0);

        for (int i = 0; i < n; i++)
        {
            if (lSum == rSum)
                return i;
            else if (i < n - 1)
            {
                rSum -= nums[i + 1];
                lSum += nums[i];
            }
        }
        return -1;
    }
};