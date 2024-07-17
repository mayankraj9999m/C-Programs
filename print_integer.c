// C Program to Print an Integer Entered By the User
#include <stdio.h>
int main(){
    printf("Enter an integer: ");
    int x;
    int result = scanf("%d",&x);
    if (result == 1){
        printf("You entered : %d",x);
        }
    else{
        int c;
        printf("Invalid input! Please enter a valid integer.\n");
        while ((c = getchar()) != '\n' && c != EOF);
        }
    return 0;
}