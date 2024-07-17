// Conversion using conditional statements
#include <stdbool.h>
#include <stdio.h>

int m1()
{
    bool n = true;
    if (n == true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}

// Conversion using ternary operator
int m2()
{

    bool n = true;
    const char *s = (n == true) ? "true" : "false";
    printf("%s", s);
    return 0;
}

int main()
{
    printf("Conversion using conditional statements\n");
    m1();
    printf("\nConversion using ternary operator\n");
    m2();
}