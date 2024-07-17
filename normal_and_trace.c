// program to find normal and trace of a matrix
#include <stdio.h>
#include <math.h>

int trace(int x, int matrix[x][x])
{
    int trace = 0;
    for (int r = 0; r < x; r++)
    {
        for (int c = 0; c < x; c++)
        {
            if (r == c)
            {
                trace += matrix[r][c];
            }
        }
    }
    return trace;
}

int normal(int x, int matrix[x][x])
{
    int normal_sq = 0;
    for (int r = 0; r < x; r++)
    {
        for (int c = 0; c < x; c++)
        {
            normal_sq += pow(matrix[r][c], 2);
        }
    }
    return sqrt(normal_sq);
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
    printf("The Trace of the matrix is %d\n", trace(x, matrix));
    printf("The Normal of the matrix is %d", normal(x, matrix));
    press_any_key_to_exit();

    return 0;
}