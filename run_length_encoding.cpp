string encode(string src)
{
    string ans;
    ans += src[0];
    int count= 1;  //for counting repeated char
    for (int i=1; i<src.size(); i++){
        if(src[i] == src[i-1]){
            count++;
        }
        else{
            ans += to_string(count);
            ans += src[i];
            count = 1;
        }
    }
    ans += to_string(count);  //for last one
    return ans;
}
