bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int len = flowerbed.size();
        int cnt = 0;

        for(int i=0; i<len; i++){
            if(flowerbed[i] == 0){
                bool lft = false, rgt = false;

                if(i == 0 || flowerbed[i - 1] == 0)
                    lft = true;
                
                if(i == (len - 1) || flowerbed[i + 1] == 0)
                    rgt = true;

                if(lft && rgt){
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
        }
        return (cnt >= n);
    }