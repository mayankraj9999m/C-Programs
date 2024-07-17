#include <stdio.h>

int main(){
    printf("Enter no. of rows : ");
    int r;
    scanf("%d", &r);
    int count = 0;
    for(int i = 1; i <= r; i++){
        if (i % 2 == 0){
            printf("\n");
        }
        else{
            int a = r / 2;
            int b = a - count;
            for (int j = 1; j <= b; j++){
                printf(" ");
            }
            printf("*");
            if (i == 1){
                printf("\n");
                count++;
                continue;
            }
            else if (i == r){
                for (int z = 1; z <= a; z++){
                 printf(" *");
                }
            }
            else{
                int c = 1 + (2 * (count - 1));
                for (int d = 1; d <= c; d++){
                    printf(" ");
                }
                printf("*\n");
                count++;
            }            
        }
    }
    return 0;
}