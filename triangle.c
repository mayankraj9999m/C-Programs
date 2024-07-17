#include <stdio.h>

int main(){
    int m;
    printf("Enter number of rows = ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        for (int j = 1; j <= i+1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}