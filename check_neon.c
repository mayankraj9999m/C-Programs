#include <stdio.h>
#include <math.h>
int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}
int main(){
    int a;
    printf("Enter Number = ");
    scanf("%d", &a);
    int b = pow(a, 2);
    int len = countDigits(b);
    int arr[len];
    for (int i = 0; i < len; i++){
        int orig_num1 = b;
        b /= 10;
        int rem = orig_num1 % 10;
        arr[i] = rem;
    }
    int num = 0;
    for (int j = 0; j < len; j++){
        num += arr[j];
    }
    if (num == a){
        printf("It is a neon number.");
    }
}