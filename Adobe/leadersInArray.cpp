//we keep track of max element from right    
    vector<int> leaders(int a[], int n){
        vector<int>ans;
        ans.push_back(a[n-1]);
        int val = a[n-1];
        for (int i = n-1; i>0; i--){
            if (a[i-1] >= val){
                ans.push_back(a[i-1]);
                val = a[i-1];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
