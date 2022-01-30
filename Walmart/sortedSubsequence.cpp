  vector<int> find3Numbers(vector<int> arr, int N) {
       
       int x = INT_MAX;
       int y = INT_MIN;
       
       int left = 0; int right = N-1;
       while(left < right)
       {
           x = min(x,arr[left]);
           y = max(y, arr[right]);
           if(y > x)
           {
               for (int i =left+1; i <= right-1  ;i++)
               {
                   if (arr[i] < y && arr[i] > x)
                       return {x,arr[i],y};
               }
           }
           left++;
           right--;
       }
       return {};    
       
   }
