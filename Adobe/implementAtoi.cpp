int atoi(string str) {
        int res=0;
        for(auto c: str){
            if(c=='-'){
                continue;
            }
            if(c>='0' && c<='9'){
                res=res*10+(c-'0');
            }
            else{
                return -1;
            }
        }
        return (str[0]=='-' ? -1*res : res);
    }
