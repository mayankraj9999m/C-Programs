#include <stdio.h>

int main()
{
    int arr[] = {45, 15, 87, 68, 32, 19, 2};
    int n = sizeof(arr) / 4;
    int arr1[n];
    for (int i = 0; i < n; i++){
        arr1[i] = arr[i];
    }
    for (int i = 0; i < n; i++){
        printf("%d, ", arr1[i]);
    }
}