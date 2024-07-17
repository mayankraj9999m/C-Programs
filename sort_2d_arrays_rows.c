#include <stdio.h>
#include <D:\C Programmming\C Programs\C-Arrays\SORTING-HEARDER FILES\merge_sort.h>

void sort_rows(int (*arr)[4], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        int *row = arr[i];
        mergeSort(row, 0, columns-1);
    }
}

int main()
{
    int arr[][4] = {{15, 78, 25, 32},
                    {28, 54, 11, 7},
                    {74, 46, 95, 29},
                    {100, 30, 20, 10}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_rows(arr, n, 4);
    for (int a = 0; a < n; a++)
    {
        printArray(arr[a], 4);
    }
    return 0;
}