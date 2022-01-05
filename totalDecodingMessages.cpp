//dp
int CountWays(string str){
    int n=str.length();
    int dp[n+1];
    int mod = 1e9 + 7;
    dp[0]=1;
    dp[1]=1;
   
    if(n==1 && str[0]!='0')
    return 1;
    if(str[0]=='0')
    return 0;
    
    for(int i=2;i<=n;i++)
    {
        dp[i]=0;
        
        if(str[i-1]>'0')
        dp[i] = dp[i-1];
        
        if(str[i-2]=='1' || str[i-2]=='2' && str[i-1]<'7')
        dp[i] = (dp[i]+dp[i-2])%mod;
    }
    return dp[n];
}
