#include <stdio.h>
#include <string.h>

void apr1(char a[], int n)
{
    int i, c = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] != '0')
        {
            c = i;
            break;
        }
    }
    for (i = c; i < n; i++)
    {
        printf("%c", a[i]);
    }
}

void apr2(char s[], int n)
{
    if ((n = strspn(s, "0")) != 0 && s[n] != '\0')
    {
        printf("%s", &s[n]);
    }
}

int main()
{
    printf("--------------MENU--------------\n");
    printf("Approach 1 : Traversing all characters\n");
    printf("Approach 2 : strspn() function\n");
    char str[] = "0001234";
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