bool isToeplitzMatrix(int** matrix, int row, int* col) {
    for(int i=0;i<row-1;i++)
    {
        for(int j=0;j<col[i]-1;j++)
        {
            if(matrix[i][j]!= matrix[i+1][j+1])
            {
                return false;
            }
        }
    }
    return true;
    
}