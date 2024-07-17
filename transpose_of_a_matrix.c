#include <stdio.h>
#include <stdlib.h>

void printArr(int rows, int cols, int **array)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d, ", array[i][j]);
        }
        printf("\n");
    }
}

int **transpose(int rows, int cols, int array[rows][cols])
{
    // Dynamically allocate memory for the transposed array
    int **array1 = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++)
    {
        array1[i] = (int *)malloc(rows * sizeof(int));
    }

    for (int a = 0; a < cols; a++)
    {
        for (int b = 0; b < rows; b++)
        {
            array1[a][b] = array[b][a];
        }
    }
    return array1;
}

void freeTransposedArray(int rows, int **array)
{
    for (int i = 0; i < rows; i++)
    {
        free(array[i]);
    }
    free(array);
}

int main()
{
    int arr[][2] = {{14, 78},
                    {28, 54},
                    {74, 46},
                    {100, 30}};
    int r1 = sizeof(arr) / sizeof(arr[0]);
    int c1 = sizeof(arr[0]) / sizeof(arr[0][0]);

    int **array1 = transpose(r1, c1, arr);
    printArr(c1, r1, array1);

    // Free allocated memory
    freeTransposedArray(c1, array1);

    return 0;
}