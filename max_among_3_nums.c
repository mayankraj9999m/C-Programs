#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter A = ");
    scanf("%d", &a);
    printf("Enter B = ");
    scanf("%d", &b);
    printf("Enter C = ");
    scanf("%d", &c);
    if (a>b) {
        if (a>c){
            printf("\nA is largest.");
        }
        else{
            printf("\nC is largest.");
        }
    }
    else {
        if (b>c){
        printf("\nB is largest.");
        }
        else{
            printf("\nC is largest.");
        }
    }
}