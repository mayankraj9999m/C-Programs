#include <stdio.h>
int main()
{
    float p, r, t;
    printf("Enter principal = ");
    scanf("%f", &p);
    printf("Enter rate per annum = ");
    scanf("%f", &r);
    printf("Enter year = ");
    scanf("%f", &t);
    printf("Interest = %f rupees", p*r*t/100);
}