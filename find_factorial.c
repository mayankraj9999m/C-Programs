#include <stdio.h>
int main()
{
    int num;
    printf("Enter number = ");
    scanf("%d", &num);
    int factorial = 1;
    for (int i = num; i > 1; i--){
        factorial *= i;
    }
    printf("Factorial = %d", factorial);
}