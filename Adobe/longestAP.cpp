//We use DP (vector of maps) to store the series count. DP has 2 states : the next number of series and the d of AP.
    int lengthOfLongestAP(int A[], int n) {
        int diff = 0;
        if (n<=2)
            return n;
        int ans = 2;
        vector<unordered_map<int,int>>dp(n);
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                diff = A[j]-A[i];
                if (dp[i].find(diff) != dp[i].end()){
                    dp[j][diff] = dp[i][diff] + 1;
                }
                else dp[j][diff] = 2;
                ans = max(ans,dp[j][diff]);
            }
        }
        return ans;
    }
    
