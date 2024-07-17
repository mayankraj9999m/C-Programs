#include <stdio.h>
#include <stdlib.h>

void remove_element(int arr[], int element, int length)
{
    int *arr_new;
    arr_new = (int *)malloc(length * sizeof(int));
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == element)
        {
            continue;
        }
        arr_new[count] = arr[i];
        count++;
    }
    arr_new = (int *)realloc(arr_new, count * sizeof(int));
    for (int j = 0; j < count; j++)
    {
        printf("%d, ", arr_new[j]);
    }
    free(arr_new);
}

int main()
{
    int arr[9] = {5, 4, 99, 76, 45, 39, 76, 15, 82};
    printf("Enter element to delete all its occurences : ");
    int x;
    scanf("%d", &x);
    int n = 9;
    remove_element(arr, x, n);
}