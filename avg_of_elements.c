#include <stdio.h>

float avg_of_elements(int arr[], int len){
    float sum = 0;
    float length = len;
    for (int i = 0; i < len; i++){
        sum += *arr;
        arr++;
    }
    return sum/length;
}

int main(){
    int arr[] = {5,47,58,69,369,758,2486,2500};
    int len = sizeof(arr)/sizeof(arr[0]);
    float result = avg_of_elements(arr, len);
    printf("Average = %f", result);
    return 0;
}