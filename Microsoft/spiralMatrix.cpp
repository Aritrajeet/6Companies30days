    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int top = 0,left = 0, bottom = r-1, right = c-1;
        while (top <= bottom && left <= right){
            for (int i= left ; i<= right; i++){    
                ans.push_back(matrix[top][i]);
            }
            if(++top > bottom)continue;
            for (int i=top; i<= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            if(--right < left)continue;
            for (int i= right; i>= left; i--){
                ans.push_back(matrix[bottom][i]);
            }
            if(top > --bottom)continue;
            for (int i= bottom; i>= top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
