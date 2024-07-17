#include <stdio.h>

void *arr_rotation(int arr[], int arr1[], int n, int x)
{
    for (int i = x; i < n; i++)
    {
        arr1[i - x] = arr[i];
    }
    for (int i = 0; i < x; i++)
    {
        arr1[n - x + i] = arr[i];
    }
    return arr1;
}

int main()
{
    int arr[] = {45, 15, 87, 68, 32, 19, 2};
    int n = sizeof(arr) / 4;
    int x;
    int array[n];
    printf("Enter x = ");
    scanf("%d", &x);
    arr_rotation(arr, array, n, x);
    for (int a = 0; a < n; a++)
    {
        printf("%d, ", array[a]);
    }
}