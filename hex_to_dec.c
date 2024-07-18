#include <stdio.h>
#include <math.h>
#include <string.h>

int hex_to_dec(char x[])
{
    int n = strlen(x);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        char element = x[i];
        switch (element)
        {
        case 'A':
            sum += pow(16, n - 1 - i) * 10;
            continue;
        case 'B':
            sum += pow(16, n - 1 - i) * 11;
            continue;
        case 'C':
            sum += pow(16, n - 1 - i) * 12;
            continue;
        case 'D':
            sum += pow(16, n - 1 - i) * 13;
            continue;
        case 'E':
            sum += pow(16, n - 1 - i) * 14;
            continue;
        case 'F':
            sum += pow(16, n - 1 - i) * 15;
            continue;
        default:
            sum += (element - '0') * pow(16, n - 1 - i);
        }
    }
    printf("Decimal number of %s(hexadecimal) is %d", x, sum);
}

int main()
{
    char x[50];
    printf("Input a hexadecimal number = ");
    scanf("%s", x);
    hex_to_dec(x);
}