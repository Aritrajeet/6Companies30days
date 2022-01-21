    long long numOfWays(int n, int x)
    {
        // Here, dp[i] represents number of ways to represent i
        long long dp[n+1]= {0};
        dp[0] = dp[1] = 1;
        long long int limit = pow(n, 1.0/x);      //taking xth root of n to get limit

        for(long long int i = 2; i <= limit; i++){
            long long int temp = pow(i, x);
            for(long long int j = n; j >= temp; j--){
                dp[j] += dp[j-temp];
            }
        }
        
        return dp[n];
    }
