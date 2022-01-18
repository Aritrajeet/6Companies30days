//we maintain map to store names and count of votes. Then we return the first name with max votes.   
vector<string> winner(string arr[],int n)
    {
        map<string,int> m;
        for (int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int maxi = 0;
        for(auto x:m){
            if (x.second > maxi){
                maxi = x.second;
            }
        }
        for (auto x:m){
            if (x.second == maxi){
                return {x.first,to_string(x.second)};
            }
        }
    }
