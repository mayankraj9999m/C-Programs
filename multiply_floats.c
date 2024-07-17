#include <stdio.h>
int main(){
    float x, y;
    printf("Write first number : ");
    int result1 = scanf("%f", &x);
    printf("Write second number : ");
    int result2 = scanf("%f", &y);
    if (result1 == 1 && result2 == 1){
        printf("Product is : %.3f", x*y);
    }
    else{
        int c;
        printf("You were off target.");
        while ((c = getchar()) != '\n' && c != EOF);
    }
}