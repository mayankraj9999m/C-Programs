#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    printf("Before swapping :\na : %d\nb : %d\n", a, b);
    int c;
    c = a; a = b; b = c;
    printf("After swapping :\na : %d\nb : %d", a, b);
}