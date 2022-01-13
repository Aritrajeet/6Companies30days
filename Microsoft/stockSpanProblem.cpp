    //We maintain a stack to store days corresponding to stocks. span[i] = i - stack.top() ; since topmost day in stack is day of smallest stock greater than ith one.
    // So, their diff gives the contiguous stocks less than ith one.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int> ans(n);
       ans[0] = 1;
       stack <int> s;
       s.push(0);
       for (int i=1; i<n; i++){
           while(!s.empty() && price[i] >= price[s.top()]){
               s.pop();
           }
           if (s.empty()){      //largest stock
               ans[i] = i+1;
           }
           else ans[i] = i - s.top();
           s.push(i);
       }
       return ans;
    }
