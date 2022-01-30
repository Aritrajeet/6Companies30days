    int height(int N){
        int count = 0;
        for (int i=1; i<=N; i++){
            N -= i;
            count++;
        }
        return count;
    }
