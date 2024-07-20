// C program for QuickSort
#include <stdio.h>
// function to swap tp integers
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
// Driver code
int main()
{
    int x, y;
    printf("Enter Value of x = ");
    scanf("%d", &x);
    printf("\nEnter Value of y = ");
    scanf("%d", &y);
    // Note that we are passing addresses
    // of two variables
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}