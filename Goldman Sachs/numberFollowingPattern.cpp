//We create a stack to store the numbers increasingly when we see D. Once an I is seen we pop the stack. In this way we get the desired pattern   
string printMinNumberForPattern(string S){
        string ans = "";
        int n = S.length();
        stack<int> st; //used to store reverse numbers
        int num = 1;
        for (int i=0; i<n; i++){
            if (S[i] == 'D'){
                st.push(num++);
            }
            else{
                st.push(num++);
                while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
            }
        }
            st.push(num++);
            while(!st.empty()){
                    ans += to_string(st.top());
                    st.pop();
                }
        return ans;
    }
