        int max_length = 0;
        int n = arr.size();
        for(int i=1;i<n-1;i++)
        {
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1])) // denotes highest point (peak)
            {
                int start= i;
                int end = i;
                while( start>0 && arr[start] > arr[start-1])
                {
                    start--; // start point of mountain
                    
                }
                while( end<n-1 && arr[end] > arr[end+1] )
                {
                    end++; //  end point of mountain
                }
                max_length = max(max_length,(end-start+1));
                i = end;
            }
        }
        return max_length;
    }
