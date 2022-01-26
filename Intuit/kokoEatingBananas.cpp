//We start with k=1 then calculate time to eat all bananas. If it exceeds h we check for k+1 and so on.   
int minEatingSpeed(vector<int>& piles, int h) {
        int k = 0;
        while(true){
            long long int time = 0;
            k++;
            for (int i=0; i<piles.size(); i++){
                time += ceil((float)piles[i]/(float)k);
            }
            if(time <= h) return k;
        }
    }
