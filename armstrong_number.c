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
    int a, b;
    printf("Enter Lower Limit = ");
    scanf("%d", &a);
    printf("Enter Upper Limit = ");
    scanf("%d", &b);
    printf("**************************************\n");
    printf("ARMSTRONG NUMBERS B/W %d AND %d\n", a, b);
    printf("**************************************\n\n");
    for (int i = a; i <= b; i++){
        int len = countDigits(i);
        int arr[len];
        int rem = i;
        for (int j = 0; j <= len; j++){
            if (countDigits(rem) == 1){
                arr[j] = pow(rem, len);
                break;
            }
            int res = pow(10, len - j - 1);
            arr[j] = pow(((rem - (rem % res))/res), len);
            rem %= res;
        }
        int sum = 0;
        for (int k = 0; k < len; k++){
            sum += arr[k];
        }
        if (sum == i){
            printf("Sum = %d, No. = %d ---------> Armstrong\n", sum, i);
        }
    }
}