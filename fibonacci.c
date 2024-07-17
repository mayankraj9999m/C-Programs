#include <stdio.h>
int main()
{
    int num;
    printf("Enter number of terms = ");
    scanf("%d", &num);
    int list[num];
    list[0] = 0; list[1] = 1;
    for (int i = 3; i <= num; i++){
        list[i-1] = list[i-2] + list[i-3];
    }
    printf("Fibonacci series");
    printf("\n-----------------\n");
    for (int j = 0; j < num; j++){
        printf("%d, ", list[j]);
    }
}