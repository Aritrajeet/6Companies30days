 //We create a map which stores sorted strings. We compare all strings after sorting. Anagrams will give same string on sorting which is the key of our map. 
vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> v;
        int n = string_list.size();
        map<string,vector<string>> m; //key -> sorted strings & value-> groups of similar strings
        string temp;
        for (int i=0; i<n; i++){
            temp = string_list[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(string_list[i]);
        }
        for (auto x:m){
            v.push_back(x.second);
        }
        return v;
    }
