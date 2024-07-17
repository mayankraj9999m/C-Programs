#include <stdio.h>
int main1(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int i = 0;
    for (i=2; i<=a/2; i++){
        if (a%i == 0){
            printf("%d is a composite number.\n", a);
            printf("%d is a number which divides %d first.", i, a);
            break;
            }
        else if (i > (a/2-1)){
            printf("%d is a prime number.", a);
            break;
            }
    }
    return 0;
}