//DP    
int maxProfit(int K, int N, int A[]) {
        int dp[K+1][N];
        for (int i=0; i<=K; i++)
            for (int j=0; j<N; j++)
                dp[i][j] = 0;
        for (int i=1;i<=K; i++){
            int maxi = INT_MIN;
            for (int j=1; j<N; j++){
                maxi = max(maxi , dp[i-1][j-1] - A[j-1]);   //buying a stock before jth day
                dp[i][j] = max(dp[i][j-1],A[j]+maxi); //either not selling on jth day OR selling
            }
        }
        return dp[K][N-1];
    }
