#include <stdio.h>
int main(){
    int a, b;
    printf("Enter Number A = ");
    scanf("%d", &a);
    printf("Enter Number B = ");
    scanf("%d", &b);
    int divisor, quotient, dividend, remainder = 1;
    if (a > b){
        dividend = a;
        divisor = b;
    }
    else{
        dividend = b;
        divisor = a;
    }
    while (remainder != 0){
        if (dividend > divisor){
            remainder = dividend % divisor;
            quotient = (dividend - remainder)/divisor;
            if (remainder != 0){
                dividend = divisor;
                divisor = remainder;
            }
        }
    }
    int hcf = divisor;
    printf("HCF = %d", divisor);
    printf("\nLCM = %d", a*b/hcf);
}