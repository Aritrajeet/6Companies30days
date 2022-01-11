//Sliding window technique
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if (k==1) return 0;
        int left = 0,right = 0;
        int count = 0;
        long long product = 1;
        while(right<n){
            product *= a[right];
            while(left <= right && product >= k){
                product /= a[left++];
            }
            count += right - left + 1 ;//Observation
            right++; //incrementing size of window
        }
        return count;
    }
