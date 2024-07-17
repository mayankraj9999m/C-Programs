#include <stdio.h>
//using recursion
int sum(int x){
    if (x == 1){
        return x;
    }
    return x + sum(x-1);
}

int main(){
    int x;
    printf("Enter last term = ");
    scanf("%ld", &x);
    int result = sum(x);
    printf("Sum = %d", result);
}