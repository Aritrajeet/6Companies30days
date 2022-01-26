//like sort array problem using min adjacent swaps.   
int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size(),ans=0;
        vector<int>v(n);
        for(int i=0 ; i<n ; i++)           
            int j=n-1,count=0;
            while(j>=0 and grid[i][j]==0) {
                count++;j--;
            }
            v[i]=count;
        }
        for(int i=0 ; i<n ; i++) 
        {
            if(v[i]<n-1-i)
            {
                int j=i;
                while(j<n && v[j]<n-1-i) 
                    j++;
                if(j==n) return -1;
                while(i<j)
                {
                    swap(v[j],v[j-1]);
                    ans++;
                    j--;
                }
            }
        }
        return ans;
    }
