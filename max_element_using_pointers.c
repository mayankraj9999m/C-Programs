#include <stdio.h>
#include <stdlib.h>

void max(int *array_op, int c)
{
    int max = *array_op;
    for (int i = 0; i < c - 1; i++)
    {
        if (*(array_op + 1 + i) > max)
            max = *(array_op + 1 + i);
    }
    printf("Maximum element = %d", max);
}

int main()
{
    int c = 5;
    int *array = (int *)calloc(c, sizeof(int));
    for (int a = 0; a < 5; a++)
    {
        int x;
        printf("Element %d = ", a + 1);
        scanf("%d", &x);
        array[a] = x;
    }
    // print array
    for (int i = 0; i < c; i++)
    {
        printf("%d ", array[i]);
    }
    max(array, c);
    free(array);
}