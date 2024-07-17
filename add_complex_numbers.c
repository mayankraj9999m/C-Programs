#include <stdio.h>
int main()
{
    float a1, a2, b1, b2;
    printf("Enter Complex no. 1 : \n");
    printf("Real Part = ");
    scanf("%f", &a1);
    printf("Imaginary Part = ");
    scanf("%f", &a2);
    printf("Enter Complex no. 2 : \n");
    printf("Real Part = ");
    scanf("%f", &b1);
    printf("Imaginary Part = ");
    scanf("%f", &b2);
    printf("First C.N. = %f + %fi\n", a1, a2);
    printf("Second C.N. = %f + %fi\n", b1, b2);
    printf("-----------------------------------------\n");
    printf("Sum = %f + %fi", a1 + b1, a2 + b2);
}