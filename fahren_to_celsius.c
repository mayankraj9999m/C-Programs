#include <stdio.h>
int main()
{
    float fahrenheit;
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);
    printf("%f", fahrenheit);
    float celsius = (fahrenheit-32.0)*(5.0/9.0);
    printf("\nTemperature in Celsius is %f degrees", celsius);
}