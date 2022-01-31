//we use dfs   
bool dfs(vector<vector<char>>& board, string word, int r, int c,int idx){
        if (idx == word.length())
            return true ;//succesfully read the string.
        if (r < 0 || c<0 || r>=board.size() || c>=board[0].size() || board[r][c] != word[idx])
            return false;
        char temp = board[r][c];
        board[r][c] = '*'; //denotes visited
        bool flag = (dfs(board,word,r-1,c,idx+1) || dfs(board,word,r,c-1,idx+1) || dfs(board,word,r+1,c,idx+1) || dfs(board,word,r,c+1,idx+1));
        board[r][c] = temp;
        return flag;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        //whenever i see first letter match, i will search for rest of the word
        for (int i=0; i<board.size(); i++){
            for (int j=0; j<board[0].size(); j++){
                if (board[i][j] == word[0] && dfs(board,word,i,j,0))    //idx of word = 0 
                    return true;
            }
        }
        return false;
    }
