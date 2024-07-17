#include <stdio.h>
#include <string.h>

int loops(char line[])
{
    int i = 0;
    int count = 0;
    while (line[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int str_len(char line[])
{
    return strlen(line);
}

int size_of(char line[])
{
    // This approach isn't generally valid in practice, just for demonstration
    return sizeof(line) - 1; // This will return the size of the pointer, not the actual string length
}

int pointer(char line[])
{
    char *ptr = line;
    // traversing till last pointer
    while (*ptr)
    {
        ptr++;
    }
    printf("Address of start position of string : %p\n", (void *)line);
    printf("Address of end position of string : %p\n", (void *)ptr);
    // difference between the address will give the length of string
    int length = ptr - line;
    return length;
}

int main()
{
    printf("--------------MENU--------------\n");
    printf("1 --> Using loops\n");
    printf("2 --> Using strlen()\n");
    printf("3 --> Using sizeof()\n");
    printf("4 --> Using pointer subtraction\n");
    printf("Enter choice = ");
    int c;
    scanf("%d", &c);
    char str[50];
    printf("Enter a line = ");
    getchar(); // To consume the newline character left by scanf
    fgets(str, 50, stdin);
    // Remove the newline character if it's read by fgets
    str[strcspn(str, "\n")] = '\0';
    switch (c)
    {
    case 1:
        printf("LENGTH = %d\n", loops(str));
        break;
    case 2:
        printf("LENGTH = %d\n", str_len(str));
        break;
    case 3:
        printf("Note: sizeof function does not give the correct length of the string.\n");
        printf("Pointer size = %lu\n", size_of(str));
        break;
    case 4:
        printf("LENGTH = %d\n", pointer(str));
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}