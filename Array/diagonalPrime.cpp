class Solution {
    public:
        bool isPrime(int num) {
    
            if(num <= 1) return false;
    
            double numSqr = sqrt(num);
            for(int i=2; i<=numSqr; i++)
                if(!(num % i))
                    return false;
    
            return true;
        }
    
        int diagonalPrime(vector<vector<int>>& nums) {
            int r = nums.size();
            int maxNum = 0;
    
            for(int i=0; i<r; i++){
                int num = nums[i][i];
                if(isPrime(num)) 
                    if(num > maxNum)
                        maxNum = num;
            }
    
            for(int i=0; i<r; i++){
                int num = nums[i][r-i-1];
                if(isPrime(num))
                    if(num > maxNum)
                        maxNum = num;
            }
            return maxNum;
        }
    };