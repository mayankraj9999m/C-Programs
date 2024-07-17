#include <stdio.h>

void get_matrices(int r, int c, int matrix[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("(%d,%d) = ", i, j);
            int element;
            scanf("%d", &element);
            matrix[i][j] = element;
        }
    }
}

void printMatrix(int r, int c, int matrix[r][c])
{
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
    printf("-----------------------------\n");
}

void add_matrices(int r, int c, int matrix_1[r][c], int matrix_2[r][c], int new[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            new[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
}

void press_any_key_to_exit()
{
    printf("\nPress any key to exit...\n");
    // Consume any leftover newline character in the buffer
    while (getchar() != '\n');
    getchar(); // Wait for user input
}

int main()
{
    int r1;
    int c1;
    printf("--------MATRIX 1-------------\n");
    printf("Enter no. of rows = ");
    scanf("%d", &r1);
    printf("Enter no. of columns = ");
    scanf("%d", &c1);
    printf("-----------------------------\n");
    int matrix_1[r1][c1];
    get_matrices(r1, c1, matrix_1);
    printMatrix(r1, c1, matrix_1);
    int r2;
    int c2;
    printf("--------MATRIX 2-------------\n");
    printf("Enter no. of rows = ");
    scanf("%d", &r2);
    printf("Enter no. of columns = ");
    scanf("%d", &c2);
    printf("-----------------------------\n");
    int matrix_2[r2][c2];
    get_matrices(r2, c2, matrix_2);
    printMatrix(r2, c2, matrix_2);
    if (r1 == r2 && c1 == c2)
    {
        int result[r1][c1];
        add_matrices(r1, c1, matrix_1, matrix_2, result);
        printMatrix(r1, c1, result);
    }
    else
    {
        printf("Cannot be added");
    }
    press_any_key_to_exit();
    return 0;
}