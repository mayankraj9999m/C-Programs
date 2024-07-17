#include <stdio.h>
#include <string.h>

void reverse(char line[], char line1[], int len)
{
    for (int i = 0; i < len; i++)
    {
        line1[i] = line[len - 1 - i];
    }
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
    reverse(str, str1, len);
    printf("Reversed string is %s", str1);
    return 0;
}
