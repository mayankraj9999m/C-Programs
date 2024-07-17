#include <stdio.h>
int prime_check(int n)
{
    if (n == 1)
    {
        return 2;
    }
    else if (n == 2 || n == 3)
    {
        return 1;
    }
    int b = n / 2;
    for (int a = 2; a <= b; a++)
    {
        if (n % a == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Enter a number = ");
    int x;
    scanf("%d", &x);
    int result = prime_check(x);
    if (result == 0)
    {
        printf("%d is not a prime number\n************************", x);
    }
    else if (result == 1)
    {
        printf("%d is a prime number\n************************", x);
    }
    else
    {
        printf("1 is a unit number\n************************");
    }
    return 0;
}