# include <stdio.h>
int main()
{
    int a;
    printf("Enter the integer = ");
    scanf("%d", &a);
    if (a > 0){
        printf("%d is positive.", a);
    }
    else if (a < 0){
        printf("%d is negative.", a);
    }
    else{
        printf("Zero.");
    }
}