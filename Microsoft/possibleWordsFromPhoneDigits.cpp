//Recursion    
void solve(int a[],int n, int ptr, string temp, vector<string> &ans, string key[]){
        //base case
        if (ptr >= n){
            ans.push_back(temp);
            return;
        }
        int num = a[ptr];
        string val = key[num];
        for (int i=0; i<val.length(); i++){
            temp.push_back(val[i]); 
            solve(a,n,ptr+1,temp,ans,key);
            temp.pop_back(); //backtracking
        }
    }
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        string key[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        int ptr=0;
        string temp="";
        solve(a,N,ptr,temp,ans,key);
        return ans;
    }
