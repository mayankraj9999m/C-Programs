#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    printf("Enter principal = ");
    scanf("%f", &p);
    printf("Enter rate per annum = ");
    scanf("%f", &r);
    printf("Enter year = ");
    scanf("%f", &t);
    float a = p*pow((1+r/100),t);
    printf("Interest = %f rupees", a-p);
}