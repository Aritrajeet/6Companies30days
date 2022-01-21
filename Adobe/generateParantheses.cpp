void func(int o,int c,string op,vector<string>&ans){
        if(c<o||c<0||o<0)return;
        if(c==0&&o==0){
            ans.push_back(op);
            return;
        }
        func(o-1,c,op+"(",ans);
        func(o,c-1,op+")",ans);
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string>ans;
        func(n,n,"",ans);
        return ans;
    }
