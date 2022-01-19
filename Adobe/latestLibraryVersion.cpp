//There are 3 possible cases.
string latest(sstring a,string b){
  
  //case 1 :  a = b //both are answer
  if (a == b) return a;
  
  //case 2 : different no. of decimals used '.'.
  int dots = 0;
  for (int i=0; i<a.length(); i++){
    if (a[i] == '.') dots++;
  }
  for (int i=0; i<b.length(); i++){
    if (b[i] == '.') dots--;
  }
  if (dots > 0) return a;
  else return b;
  
  //case 3 : same no. of decimals. We compare numbers from the front
  int ia=0,ib=0;
  while(true){
    string temp1,temp2;
    while(s[ia] != '.' && ia < a.length() ){
      temp1 += s[ia++];
    }
    ia++;
    while(s[ib] != '.' && ib < b.length() ){
      temp2 += s[ib++];
    }
    ib++;
    if (stoi(temp1) > stoi(temp2)) return a;      //a is recent version
    else if (stoi(temp1) < stoi(temp2)) return b;     //b is recent version
  }
}
