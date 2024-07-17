#include <stdio.h>
#include <string.h>

void sort(char *arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        char *key = arr[i];
        j = i - 1;
        while (j >= 0 && strcmp(arr[j], key) > 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    // Get the array of names to be sorted
    char *arr[] = {"geeksquiz", "geeksforgeeks", "clanguage"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    // Print the given names
    printf("Given array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);
    // Sort the given names
    sort(arr, n);
    // Print the sorted names
    printf("\nSorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d: %s \n", i, arr[i]);
    return 0;
}