class Solution {
    public:
        bool validMountainArray(vector<int>& arr) {
    
            int n = arr.size();
            if(n < 3) return false;
    
            int max_i(0), maxNum(0);
            for(int i=0; i<n; i++) {
                if(arr[i] > maxNum) {
                    maxNum = arr[i];
                    max_i = i;
                }
            }
    
            if((max_i == 0) || (max_i == (n-1))) return false;
    
            for(int i=0; i<max_i; i++)
                if(arr[i] >= arr[i+1])
                    return false;
    
            for(int i=max_i; i<(n-1); i++)
                if(arr[i] <= arr[i+1])
                    return false;
    
            return true;
        }
    };