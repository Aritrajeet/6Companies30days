//Sliding window problem variant
int minSubArrayLen(int target, vector<int>& nums) {
        int idx = 0;  //iterate each number
        int len = INT_MAX;   //length of result subarray
        int sub_sum = 0;    //sum of subarray
        for (int i=0; i<nums.size(); i++){
            sub_sum += nums[i];
            while(sub_sum >= target){
                len = min(len,i+1-idx);
                sub_sum -= nums[idx];
                idx++;
            }
        }
        if (len == INT_MAX) return 0;
        return len;
    }
