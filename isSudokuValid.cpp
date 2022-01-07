//We check for 3 criterias to conclude that our sudoku is valid.
// No digits from 1 to 9 can repeat in:
//    one of the Rows,Columns,Boxes.


int isValid(vector<vector<int>> mat){
        int n = mat.size();
        for (int i=0; i<n; i++){
            int r[9],c[9];
            for (int j=0; j<n; j++){
                r[j] = mat[i][j];
                c[j] = mat[j][i];
                if (i%3==0 && j%3 == 0){
                    int d[9]={0};
                for (int k = i; k < (i + 3); k++)
                {
                    for (int l = j; l < (j + 3); l++)
                    {
                        if (mat[k][l] != 0)
                        {
                            if (d[mat[k][l] - 1] == 0)
                                d[mat[k][l] - 1] += 1;
                            else return 0;
                        }
                    }
                }
                }
            }
            sort(r,r+9);
            sort(c,c+9);
            for (int k=0; k<8; k++){
                if (r[k] == r[k+1] && r[k] != 0){
                    return false;
                }
            }
            for (int k=0; k<8; k++){
                if (c[k] == c[k+1] && c[k] != 0){
                    return false;
                }
            }
        }

        return true;
    }
