#include <stdio.h>
#include <stdlib.h>

int sum_of_dia(int r, int matrix[r][r])
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

void press_any_key_to_exit()
{
    printf("\nPress any key to exit...\n");
    getchar(); // consume the newline character left by the previous input
    getchar(); // wait for user input
}

int main()
{
    printf("Enter dimension of your matrix(e.g, 4 --> 4x4) = ");
    int x;
    scanf("%d", &x);
    int matrix[x][x];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("(%d,%d) = ", i, j);
            int y;
            scanf("%d", &y);
            matrix[i][j] = y;
        }
    }
    printf("\n---------------------------------\n");
    printf("Your Matrix is :\n");
    for (int i = 0; i < x; i++)
    {
        printf("[ ");
        for (int j = 0; j < x; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf(" ]\n");
    }
    printf("---------------------------------\n");
    printf("The Sum of the diagonal elements is %d", sum_of_dia(x, matrix));

    press_any_key_to_exit();

    return 0;
}