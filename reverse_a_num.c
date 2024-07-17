#include <stdio.h>
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
    printf("**************************************\n");
    printf("REVERSE A NUMBER\n");
    printf("**************************************\n\n");
    int len = countDigits(a);
    int arr[len];
    for (int i = 0; i < len; i++){
        int orig_num1 = a;
        a = a/10;
        int rem = orig_num1 % 10;
        arr[i] = rem;
    }
    printf("Reversed Number = ");
    for (int j = 0; j < len; j++){
        printf("%d", arr[j]);
    }
}