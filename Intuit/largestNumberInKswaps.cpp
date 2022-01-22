// We create a string that has maximum value i.e sorted string. We keep swapping to get the max possible string in k swaps.    
string findMaximumNum(string str, int k)
    {
        vector<pair<char,int>> s;
        for (int i=0; i<str.length(); i++){
            s.push_back({str[i],i});
        }
       sort(s.rbegin(),s.rend());
       int i=0;
       while(k>0 && i < str.length()){
           if (str[i] < s[i].first){
               swap(str[i],str[s[i].second]);
               i--;
               k--;
           }
           i++;
       }
       return str;
    }
