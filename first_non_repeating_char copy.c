#include <stdio.h>
#include <string.h>
#include <ctype.h>

char find_non_repetitive_char(char para[])
{
    int index = 0;
    while (para[index] != '\0')
    {
        int count = 0;
        int index1 = 0;
        printf("%d\n", index);
        printf("%d\n", index1); // start from the next character
        while (para[index1] != '\0')
        {
            if (para[index1] == para[index])
            {
                printf("%d\n", index);
                printf("%d\n", index1);
                printf("%c, %c", para[index], para[index1]);
                printf("COUNT = %d --", count);
                count++;
                printf("COUNT = %d ||||\n", count);
            }
            index1++;
        }
        if (count == 1)
        {
            return para[index];
        }
        index++;
    }
    return 'a';
}

int main()
{
    char str[200];
    printf("Enter a paragraph : ");
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = '\0';
    char ans = find_non_repetitive_char(str);
    printf("ASCII Value = %d\n\n", ans);
    if (ans != 'a')
        printf("First non-repetitive character is %c", ans);
    else
        printf("All are repeating at least twice.");
    return 0;
}
