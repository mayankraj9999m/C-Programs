#include <stdio.h>
#include <string.h>

int add_bin(char a[], char b[], int c[], int len_a, int len_b)
{
    int count = 0;
    int j = len_a - 1;
    int carry = 0;
    for (int i = len_b - 1; i >= 0; i--)
    {
        int num1 = b[i] - '0';
        int num2 = a[j] - '0';
        int outcome = num1 + num2 + carry;
        j--;
        if (outcome == 1 || outcome == 0)
        {
            carry = 0;
            c[count] = outcome;
            count++;
        }
        else if (outcome == 2)
        {
            carry = 1;
            c[count] = 0;
            count++;
        }
        else
        {
            carry = 1;
            c[count] = 1;
            count++;
        }
    }
    for (j; j >= 0; j--)
    {
        int outcome = (a[j] - '0') + carry;
        if (outcome == 1 || outcome == 0)
        {
            carry = 0;
            c[count] = outcome;
            count++;
        }
        else if (outcome == 2)
        {
            carry = 1;
            c[count] = 0;
            count++;
        }
    }
    if (carry == 1)
        c[count] = 1;
        count++;
    return count;
}

int main()
{
    char a[30];
    char b[30];
    int c[31];
    int len_c;
    printf("Enter first binary number : ");
    scanf("%s", a);
    printf("Enter second binary number : ");
    scanf("%s", b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    if (len_a >= len_b)
        len_c = add_bin(a, b, c, len_a, len_b);
    if (len_b >= len_a)
        len_c = add_bin(b, a, c, len_a, len_b);
    printf("--------------- BINARY NUMBER ---------------\n");
    printf("%s + %s = ", a, b);
    for (int i = len_c - 1; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
}