//first we reverse the matrix column wise then transpose the matrix 
void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    for (int i=0; i<n; i++){
        for (int j=0;j<n/2;j++){
            
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i >= j) continue;
           swap(matrix[i][j],matrix[j][i]);
        }
    }
}
