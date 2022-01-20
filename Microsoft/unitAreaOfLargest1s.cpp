//We use dfs to traverse connected 1's.
    public:
    int dfs(vector<vector<int>>&v ,int row , int col){
        if (row < 0 || col <0 || row >= v.size() || col >= v[row].size()){
            return 0;
        }
        if (v[row][col] == 0){      
            return 0;
        }
        v[row][col] = 0;            //mark the node as visited
        int area = 1;
        for (int i = row-1; i<= row+1; i++){
            for (int j = col-1; j<= col+1; j++){
                    area += dfs(v,i,j);
            }
        }
        return area;
    }
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        int maxi = 0;
        for (int i=0; i<grid.size(); i++){
            for(int j=0; j < grid[i].size(); j++){
                if (grid[i][j] == 1){        //not visited
                    maxi = max(maxi,dfs(grid,i,j));
                    
                }
            }
        }
        return maxi;
    }
