    int *findTwoElement(int *arr, int n) {
      int *ans = new int[2];
      unordered_map<int,int> mp;
      
      int maxi = INT_MIN;
      for(int i=0; i<n; i++)
      {
          maxi = max(maxi,arr[i]);
          mp[arr[i]]++;
      }
      
      
      for(int i=0; i<n; i++)
      {
          if(mp[arr[i]] == 2)
          {
              ans[0] = arr[i];
              break;
          }
      }
      
      for(int i=1; i<=maxi+1; i++)
      {
          if(mp.count(i) == 0)
          {
              ans[1] = i;
              break;
          }
      }
      return ans;
   }
