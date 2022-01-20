//since we divide into 2 pairs of equal sum , the sum of array should be even. Then we search for sum/2 in the array using subset sum approach using DP.
bool checkSum (int arr[],int n, int sum){
    
    int dp[n+1][sum+1];
    
      for(int i =0; i<=n; i++)
       dp[i][0] = 1;
       for(int i =1; i<=sum; i++)
       dp[0][i] =0;
       
       
       for(int i=1;i<=n;i++){
           for(int j=1;j<=sum;j++){
               
               if(arr[i-1]<=j){
                   dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
               }
               
               else if(arr[i-1]>j)
                dp[i][j]=dp[i-1][j];
           }
       }
       return dp[n][sum];
}
    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        for (int i=0; i<N; i++){
            sum += arr[i];
        }
        if(sum % 2 != 0) return 0;
        if (checkSum(arr,N,sum/2)) return 1;
        return 0;
    }
