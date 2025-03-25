class Solution {
    public:
        int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
            int sz1 = nums1.size();
            int sz2 = nums2.size();
    
            int sum1(0), sum2(0);
            if(sz1%2) {
                for(int i=0;i<sz2;i++)
                    sum1 ^= nums2[i];
            }
    
            if(sz2%2) {
                for(int i=0;i<sz1;i++)
                    sum2 ^= nums1[i];
            }
    
            return sum1 ^ sum2;
        }
    };