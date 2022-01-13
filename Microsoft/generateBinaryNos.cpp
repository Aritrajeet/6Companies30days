string bin(int n){
    string s;
    while(n){
        if (n%2) s += '1';
        else s += '0';
        n /= 2;
    }
    reverse(s.begin(),s.end());
    return s;
}

//Function to generate binary numbers from 1 to N .
vector<string> generate(int N)
{
    vector<string> ans;
	for (int i=1; i<= N; i++){
	    ans.push_back(bin(i));
	}
	return ans;
}
