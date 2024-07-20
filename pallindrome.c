#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pallindrome_check(char *line, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (*(line + i) != *(line + len - 1 - i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char *str = (char *)calloc(20, sizeof(char));
    printf("Enter a string = ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    int len = strlen(str);
    printf("LENGTH = %d\n", len);
    int ans = pallindrome_check(str, len);
    if (ans == 1)
    {
        printf("String is pallindrome.");
    }
    else if (ans == 0)
    {
        printf("String is not pallindrome.");
    }
    free(str);
    return 0;
}