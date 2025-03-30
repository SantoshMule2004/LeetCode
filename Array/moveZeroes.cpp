class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            int zInd(0);
    
            for(int i=0; i<n; i++) {
                if(nums[i])
                    swap(nums[zInd++], nums[i]);
            }
        }
    };