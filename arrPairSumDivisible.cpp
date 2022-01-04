//For 2 numbers to be divisible by k their sum of remainders should be equal to k.
//So, we maintain a map to store remainder and then try to make pairs.
bool canPair(vector<int> nums, int k) {
        map<int,int> m;

        for (int i=0; i<nums.size(); i++){
            
            m[nums[i]%k]++;
        }
        if (m[0]%2 != 0) return false;
        for (int i = 1; i< k; i++){
            if (m[i] != m[k-i]) return false;      //to check pairs possibility
        }
        return true;
    }
