#include <stdio.h>
#include <stdlib.h>

int interchange(int r, int c, int matrix[r][c])
{
    for (int j = 0; j < c; j++)
    {
        int a = matrix[0][j];
        matrix[0][j] = matrix[r - 1][j];
        matrix[r - 1][j] = a;
    }
}

void press_any_key_to_exit()
{
    printf("\nPress any key to exit...\n");
    getchar(); // consume the newline character left by the previous input
    getchar(); // wait for user input
}

int main()
{
    int r;
    int c;
    printf("Enter no. of rows = ");
    scanf("%d", &r);
    printf("Enter no. of columns = ");
    scanf("%d", &c);
    int matrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("(%d,%d) = ", i, j);
            int y;
            scanf("%d", &y);
            matrix[i][j] = y;
        }
    }
    printf("\n---------------------------------\n");
    printf("Your Matrix is :\n");
    for (int i = 0; i < r; i++)
    {
        printf("[ ");
        for (int j = 0; j < c; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf(" ]\n");
    }
    printf("---------------------------------\n");
    printf("After Interchanging");
    printf("\n---------------------------------\n");
    interchange(r, c, matrix);
    for (int i = 0; i < r; i++)
    {
        printf("[ ");
        for (int j = 0; j < c; j++)
        {
            printf("%d, ", matrix[i][j]);
        }
        printf(" ]\n");
    }
    printf("---------------------------------\n");
    press_any_key_to_exit();
    return 0;
}