#include <stdio.h>
// #include <D:\C Programmming\C Programs\C-Arrays\SORTING-HEARDER FILES\merge_sort.h>

void matrices_equality(int rows1, int columns1, int rows2, int columns2, int (*array1)[rows1], int (*array2)[rows2])
{
    if (rows1 != rows2 && columns1 != columns2)
    {
        printf("\nNot equal.");
    }
    else
    {
        int check = 1;
        for (int a = 0; a < rows1; a++)
        {
            for (int b = 0; b < columns1; b++)
            {
                if (array1[a][b] == array2[a][b])
                {
                    continue;
                }
                check = 0;
            }
        }
    if (check == 1){
        printf("\nMatrices are equal.");
    }
    else{
        printf("Not equal.");
    }
    }
}

int main()
{
    int arr1[][4] = {{14, 78, 25, 32},
                     {28, 54, 11, 7},
                     {74, 46, 95, 29},
                     {100, 30, 20, 10}};
    int arr2[][4] = {{15, 78, 25, 32},
                     {28, 54, 11, 7},
                     {74, 46, 95, 29},
                     {100, 30, 20, 10}};
    int r1 = sizeof(arr1) / sizeof(arr1[0]);
    int r2 = sizeof(arr2) / sizeof(arr2[0]);
    int c1 = sizeof(arr1[0]) / 4;
    int c2 = sizeof(arr2[0]) / 4;
    matrices_equality(r1, c1, r2, c2, arr1, arr2);
}