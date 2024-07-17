#include <stdio.h>
#include <string.h>

int main(){
    int m;
    printf("Enter number of rows = ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        char space[50] = "";
        for (int j = 1; j <= m - i; j++) {
            strcat(space, "  ");
        }
        printf("%s", space);
        for (int k = i; k < i + i; k++){
            printf("%d ", k);
        }
        for (int l = 1; l <= i - 1; l++){
            printf("%d ", i + (i - 2) - (l - 1));
        }
        printf("\n");
    }
    return 0;
}