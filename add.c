#include <stdio.h>
int main(){
    int x, y;
    printf("Write first number : ");
    int result1 = scanf("%d", &x);
    printf("Write second number : ");
    int result2 = scanf("%d", &y);
    if (result1 == 1 && result2 == 1){
        printf("Sum is : %d", x+y);
    }
    else{
        int c;
        printf("You were off target.");
        while ((c = getchar()) != '\n' && c != EOF);
    }
}