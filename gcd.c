#include <stdio.h>

int hcf(int a, int b){
    int divisor, quotient, dividend, remainder = 1;
    if (a > b){
        dividend = a;
        divisor = b;
    }
    else{
        dividend = b;
        divisor = a;
    }
    if (dividend > divisor){
        remainder = dividend % divisor;
        quotient = (dividend - remainder)/divisor;
        if (remainder != 0){
            dividend = divisor;
            divisor = remainder;
        }
        else{
            return divisor;
        }
    }
    return hcf(dividend, divisor);
}

int main(){
    int a, b;
    printf("Enter Number A = ");
    scanf("%d", &a);
    printf("Enter Number B = ");
    scanf("%d", &b);
    int result = hcf(a, b);
    printf("HCF = %d", result);
    return 0;
}