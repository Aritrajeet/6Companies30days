    string colName (long long int n)
    {
        string ans;
        while(n){
            char temp = 'A' + (n-1)%26;
            ans = temp+ans; 
            n = (n-1)/26;
        }
        return ans;
    }
