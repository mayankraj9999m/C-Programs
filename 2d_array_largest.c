#include <stdio.h>
int main(){
    int arr[3][4] = {{1,2,30,4},{5,6,7,8},{9,10,11,12}};
    int largest = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            int a = arr[i][j];
            if (a > largest){
                largest = a;
            }
        }
    }
    printf("Largest = %d", largest);
    return 0;
}