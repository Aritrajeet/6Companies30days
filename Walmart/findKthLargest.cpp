    string kthLargestNumber(vector<string>& nums, int k) {
        vector<int> n;
        for (int i=0; i<nums.size(); i++){
            n.push_back(stoi(nums[i]));
        }
        sort(n.rbegin(),n.rend());
        return to_string(n[k-1]);
    }
