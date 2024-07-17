#include <stdio.h>
#include <string.h>

void apr1(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%c ", str[i]);
        }
        else if (str[i - 1] == ' ')
        {
            printf("%c ", str[i]);
        }
    }
}

void apr2(char str[], int n)
{
    // This will give first word of String.
    char *ptr = strtok(str, " ");
    while (ptr != NULL)
    {
        // This will print first character of word.
        printf("%c ", ptr[0]);
        // To get next word.
        ptr = strtok(NULL, " ");
    }
}

int main()
{
    printf("--------------MENU--------------\n");
    printf("Approach 1 : Traversing all characters\n");
    printf("Approach 2 : strtok() function\n");
    char str[] = "GeeksforGeeks, A computer science portal for geeks";
    int len = strlen(str);
    printf("Enter choice = ");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        apr1(str, len);
        break;
    case 2:
        apr2(str, len);
        break;
    default:
        break;
    }
}