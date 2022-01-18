// We convert the uppercase to lower case by doing s[i] - 'A' + 'a'.   
string amendSentence (string s)
    {
        int i=0;
        string ans;
        if (s[0]>='A' && s[0]<='Z')
            ans = s[0] - 'A' + 'a';
        else ans += s[0];
        
        for (int i=1;i<s.length(); i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                ans += " ";
                ans += s[i] - 'A' + 'a';
            }
            else ans += s[i];
        }
        return ans;
    }
