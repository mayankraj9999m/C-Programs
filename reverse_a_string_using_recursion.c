#include <stdio.h>
#include <string.h>

int reverse(char line[], char line1[], int len, int i)
{
    line1[i] = line[len - 1 - i];
    if (i == len -1){return 0;}
    return reverse(line, line1, len, i+1);
}

int main()
{
    char str[20];
    char str1[20];
    printf("Enter a string = ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    int len = strlen(str);
    printf("LENGTH = %d\n", len);
    reverse(str, str1, len, 0);
    printf("Reversed string is %s", str1);
    return 0;
}
