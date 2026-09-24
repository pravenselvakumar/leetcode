int** flipAndInvertImage(int** image, int row, int* col,
                         int* returnSize, int** returnColumnSizes)
{
    int **arr = malloc(row * sizeof(int *));

    *returnColumnSizes = malloc(row * sizeof(int));

    for (int i = 0; i < row; i++)
    {
        arr[i] = malloc(col[i] * sizeof(int));
        (*returnColumnSizes)[i] = col[i];

        int k = 0;

        // Reverse + invert
        for (int j = col[i] - 1; j >= 0; j--)
        {
            if (image[i][j] == 0)
                arr[i][k] = 1;
            else
                arr[i][k] = 0;

            k++;
        }
    }

    *returnSize = row;

    return arr;
}