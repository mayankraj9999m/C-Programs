#include <stdio.h>

int power_calculate(int n, int p){
    if (p == 0){
        return 1;
    }
    return n*power_calculate(n, p-1);
}

int main(){
    int n, p;
    printf("Enter number = ");
    scanf("%d", &n);
    printf("Enter power to be raised = ");
    scanf("%d", &p);
    int result = power_calculate(n, p);
    printf("Answer = %d", result);
}