#include <stdio.h>
#include <math.h>
int roots(int a, int b, int c)
{
    int r1 = (-b + pow(b, 2) - 4 * a * c) / 2 * a;
    int r2 = (-b - pow(b, 2) + 4 * a * c) / 2 * a;
    printf("1st Root = %f", r1);
    printf("/n2nd Root = %f", r2);
}

int main()
{
    int a, b, c;
    printf("Coefficient of x^2 = ");
    scanf("%f", &a);
    printf("Coefficient of x = ");
    scanf("%f", &b);
    printf("Constant term = ");
    scanf("%f", &c);
    // calculating roots
    roots(a, b, c);
    return 0;
}