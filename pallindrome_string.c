#include <stdio.h>
#include <string.h>

int pallindrome_chaeck(char line[])
{
    int len = strlen(line);
    for (int i = 0; i < len; i++)
    {
        if (line[i] == line[len - 1 - i])
        {
            continue;
        }
        return 0;
    }
    return 1;
}

int main()
{
    char str[20];
    printf("Enter a string = ");
    fgets(str, 20, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    int len = strlen(str);
    printf("LENGTH = %d\n", len);
    int ans = pallindrome_chaeck(str);
    if (ans == 1)
    {
        printf("String is pallindrome.");
    }
    else if (ans == 0)
    {
        printf("String is not pallindrome.");
    }
    return 0;
}
