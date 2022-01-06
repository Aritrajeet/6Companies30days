// Same as max of subarrays with size k.
// Using STL Multiset(for handling duplicates) as sliding window.   
vector <int> max_of_subarrays(int *arr, int n, int k)
    {        
        multiset<int,greater<int>> s;
        vector<int>ans;
        int maxi = INT_MIN;
        for (int i=0; i<k; i++)
        {
            maxi = max(maxi,arr[i]);
            s.insert(arr[i]);
        }
        int left = 0;
        int right = k;
        ans.push_back(maxi);
        while(right<n){
            s.erase(s.find(arr[left++]));
            s.insert(arr[right++]);
            ans.push_back(*s.begin());
        }
        return ans;
    }
