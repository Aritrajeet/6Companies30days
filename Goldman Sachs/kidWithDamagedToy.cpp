int findPosition(int N , int M , int K) {
        if (N==1) return 1;
        int ans = K+(M%N)-1;
        if (ans == N) return ans; //special case because % will give 0
        else return ans%N;
    }
