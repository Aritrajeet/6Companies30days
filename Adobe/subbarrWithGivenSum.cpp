//Sliding window     
vector<int> subarraySum(int arr[], int n, long long s)
    {
        int left = 0,right = 0;
        int sum = 0;
        while(left <= right && right <= n){
            if (sum == s){
                return {left+1 , right};
            }
            else if (sum > s){
                sum -= arr[left++];
            }
            else sum += arr[right++];
        }
        
        return {-1};
    }
