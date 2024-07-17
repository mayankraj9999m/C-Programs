#include <stdio.h>

int fact(int a){
    if (a == 1){
        return a;
    }
    return a * fact(a-1);
}

int main(){
    printf("Enter number = ");
    int x;
    scanf("%d", &x);
    int result = fact(x);
    printf("Factorial = %d", result);
    return 0;
}