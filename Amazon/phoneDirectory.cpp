 vector<vector<string>> displayContacts(int n, string contact[], string s)
   {
       set<string>mp;
       vector<vector<string>>ans(s.size());
       for(int i=0;i<n;i++){
           mp.insert(contact[i]);
       }
       for(int i=0;i<s.size();i++){
           for(auto it:mp){
               if(s.substr(0,i+1)==it.substr(0,i+1)){
                   ans[i].push_back(it);
               }
           }
           if(ans[i].size()==0){
               ans[i].push_back(to_string(0));
           }
       }
       return ans;
   }
