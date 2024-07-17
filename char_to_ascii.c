#include <stdio.h>
int main()
{
    char string;
    printf("Write a character : ");
    scanf("%c", &string);
    printf("ASCII Value of %c is %d.", string, string);
    return 0;
}