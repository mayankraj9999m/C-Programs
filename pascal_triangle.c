#include <stdio.h>
int main(){
    printf("Enter no. of rows = ");
    int r;
    scanf("%d", &r);
    int count = 0;
    int arr1[50];
    int arr2[50];
    for (int i = 1; i <= r; i++){
        int a = r - i;
        for (int j = 0; j < a; j++){
            printf(" ");
            }
        if (i == 1){
            arr1[0] = 1;
            printf("%d\n", arr1[0]);
            }
        else if(i == 2){
            arr1[0] = 1; arr1[1] = 1;
            printf("%d %d\n", arr1[0], arr1[1]);
            }
        else{
            for (int a = 1; a <= i; a++){
                if (a == 1){
                    arr2[0] = 1;
                    }
                else if (a < i){
                    arr2[a-1] = arr1[a-1] + arr1[a-2];
                    }
                else{
                    arr2[a-1] = 1;
                    }
                }
            for (int b = 1; b <= i; b++){
                arr1[b-1] = arr2[b-1];
                printf("%d ", arr2[b-1]);
            }
            printf("\n");
        }
    }
}