#include <stdio.h>

int dec_to_hexa_conversion(int decimal_Number)
{
    int i = 1, j, temp;
    char hexa_Number[100];
    while (decimal_Number != 0)
    {
        temp = decimal_Number % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal_Number = decimal_Number / 16;
    }
    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
}

int main()
{

    int Number;
    printf("Input a decimal number = ");
    scanf("%d", &Number);
    dec_to_hexa_conversion(Number);
    return 0;
}