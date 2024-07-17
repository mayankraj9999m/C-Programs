#include <stdio.h>

int main()
{
    int arr1[9] = {5, 4, 99, 58, 45, 39, 76, 15, 82};
    int arr2[4] = {47, 56, 21, 30};
    int arr[13];
    for (int i = 0; i < 9; i++)
    {
        arr[i] = arr1[i];
    }
    for (int i = 0; i < 4; i++)
    {
        arr[i + 9] = arr2[i];
    }
    for (int i = 0; i < 13; i++)
    {
        printf("%d ", arr[i]);
    }
}