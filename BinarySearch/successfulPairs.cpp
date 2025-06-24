class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        vector<int> ans(n, 0);

        sort(potions.begin(), potions.end());

        for(int i=0; i<n; i++) {
            int low = 0;
            int high = m-1;
            int firstValid = m;
            while(low <= high) {
                int mid = low + (high-low)/2;
                if((long long)spells[i] * potions[mid] >= success) {
                    firstValid = mid;
                    high = mid-1;
                }
                else
                    low = mid+1;
            }
            ans[i] = m - firstValid;
        }
        return ans;
    }
};