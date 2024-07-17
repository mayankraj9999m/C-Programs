#include <stdio.h>
#include <string.h>

char find_non_repetitive_char(char para[])
{
    int count[256] = {0}; // Array to store frequency of each character
    int index;
    for (index = 0; para[index] != '\0'; index++)
    {
        count[(unsigned char)para[index]]++; // Increment character count
    }

    for (index = 0; para[index] != '\0'; index++)
    {
        if (count[(unsigned char)para[index]] == 1) // Find first non-repetitive character
        {
            return para[index];
        }
    }
    return '\0'; // Return null character if all characters are repetitive
}

int main()
{
    char str[200];
    printf("Enter a paragraph: ");
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character
    char ans = find_non_repetitive_char(str);
    printf("ASCII Value = %d\n\n", ans);
    if (ans != '\0')
        printf("First non-repetitive character is %c\n", ans);
    else
        printf("All characters are repeating at least twice.\n");
    return 0;
}