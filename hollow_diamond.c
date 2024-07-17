#include <stdio.h>
int main(){
    printf("Enter no of rows = ");
    int r;
    scanf("%d", &r);
    int count = 0;
    int count1 = 0;
    for (int i = 1; i <= r; i++){
        int z = r / 2;
        int a = z - count;
        //spaces
        if (a > 0){
            for (int b = 1; b <= a; b++){
                printf(" ");
            }
            printf("*");
            if (i == 1){
                printf("\n");
                count++;
                continue;
            }
            int c = 1 + (2*(count - 1));
            for (int d = 1; d <= c; d++){
                printf(" ");
            }
            printf("*\n");
            count++;
            continue;
        }
        else if(a == 0){
            // middle row
            printf("*");
            for (int e = 1; e <= r-2; e++){
                printf(" ");
            }
            printf("*\n");
            count++;
        }
        else{
            // last portion
            int f = 1 + count1;
            for (int g = 1; g <= f; g++){
                printf(" ");
            }
            printf("*");
            if (i == r){
                printf("\n");
                break;
            }
            int h = (r - 4) - (2*count1);
            for (int j = 1; j <= h; j++){
                printf(" ");
            }
            printf("*\n");
            count1++;
        }
    }
    return 0;
}