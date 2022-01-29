    int NumberOfPath(int a, int b)
    {
        int dp[a+1][b+1];
        for (int i=0; i<=a; i++)
            for(int j=0; j<=b; j++)
                dp[i][j] = 1;
        for (int i = 2; i <= a; i++){
            for (int j=2; j<= b; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[a][b];
