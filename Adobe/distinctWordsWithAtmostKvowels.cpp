//We make a DP with 2 states i and j , where i represents current index in string whereas j represents length of the contiguous vowels string.
//dp[i][j] will store the count of possible strings of length j (<=k) starting at index i. Taking sum of these values will give us the answer.
long long int power(int a, long long int i, long long int mod){  //to prevent overflow
      long long val = 1;
      while(i--){
          val *= 5;
          val %= mod;
      }
      return val;
  }
  
int kvowelwords(int N, int K) {
    long long int i,j;
    long long int MOD = 1000000007;
    long long int dp[N+1][K+1]={0};
    long long int sum=1;
    for(i=1;i<=N;i++)
      {
          dp[i][0]=sum*21; //for k=0 21 consonents possible
          dp[i][0]%=MOD;
          sum=dp[i][0]; 
          
        for(j=1;j<=K;j++)
              {             
                if(j>i)                         //not possible
                    continue;
                else if(j==i)
                    dp[i][j]=power(5,i,MOD);     //all char are vowels
                else
                    dp[i][j]=dp[i-1][j-1]*5;     //selecting a vowel at ith position
                
                dp[i][j]%=MOD;
              
                sum+=dp[i][j];
                sum %= MOD;
              }
        }
    return sum;
    }
