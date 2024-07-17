#include <stdio.h>
int main()
{
    float l, w;
    printf("Enter length = ");
    scanf("%f", &l);
    printf("Enter width = ");
    scanf("%f", &w);
    printf("***************************\n");
    printf("Area = %f\n", l*w);
    printf("Perimeter = %f\n", 2*(l+w));
    printf("***************************");
}