#include <stdio.h>
#include <string.h>

int main(){
    int m;
    printf("Enter length of middle row = ");
    scanf("%d", &m);

    int d = m / 2;
    int count = 1;

    // First half of the diamond
    for (int i = 0; i < d; i++) {
        char s[50] = " ";
        for (int j = 1; j < (d - i); j++) {
            strcat(s, " ");
        }
        printf("%s", s);

        char stars[50] = "*";
        for (int k = 1; k < count; k++) {
            strcat(stars, "*");
        }
        printf("%s\n", stars);

        count += 2;
    }

    // Middle row of the diamond
    char stars[50] = "*";
    for (int k = 1; k < count; k++){
        strcat(stars, "*");
    }
    printf("%s\n", stars);

    // Second half of the diamond
    count = m - 2;
    for (int i = 1; i <= d; i++) {
        char s[50] = " ";
        for (int j = 1; j < i; j++){
            strcat(s, " ");
        }
        printf("%s", s);

        char stars[] = "*";
        for (int k = 1; k < count; k++) {
            strcat(stars, "*");
        }
        printf("%s\n", stars);

        count -= 2;
    }

    return 0;
}