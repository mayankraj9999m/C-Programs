#include <stdio.h>
#include <string.h>

// Function to clear the input buffer
void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void concatenate_string(char *str1, char *str2, char *str3)
{
    strcat(str3, str1);
    strcat(str3, str2);
}

int main()
{
    char str1[50];
    char str2[50];
    char str3[50];
    printf("Enter first string : ");
    fgets(str1, 50, stdin);
    clear_input_buffer(); // Clear the input buffer
    printf("Enter second string : ");
    fgets(str2, 50, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    printf("------------------------------\n");
    concatenate_string(str1, str2, str3);
    printf("Combined String = %s", str3);
    return 0;
}