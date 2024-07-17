#include <stdio.h>

int main()
{
    int matrix[5][5] = {{1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5},
                        {1, 2, 3, 4, 5}};
    int row = 5;
    int col = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                printf("%d ", matrix[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}