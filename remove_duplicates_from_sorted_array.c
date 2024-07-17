#include <stdio.h>
#include "D:\C Programmming\C Programs\C-Arrays\SORTING-HEARDER FILES\merge_sort.h"

void remove_duplicates(int arr[], int *n)
{
    int j = 0; // To store index of next unique element
    for (int i = 1; i < *n; i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    *n = j + 1; // Update the size of array
}

int main()
{
    int arr[] = {64, 25, 12, 22, 22, 11, 4, 9, 4, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    printf("Sorted array before removal of duplicates : \n");
    printArray(arr, n);

    remove_duplicates(arr, &n);

    printf("Sorted array after removal of duplicates : \n");
    printArray(arr, n);
    return 0;
}
