#include <stdio.h>

int binary_search(int arr[], int x, int len){
    int low = 0;
    int high = len - 1;
    while (low <= high){
        int mid = (low + high)/2;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid]){
            low = mid+1;
            continue;
        }
        else if (x < arr[mid]){
            high = mid-1;
            continue;
        }
    }
    return -1;
}
int main(){
    int arr[] = {5,47,58,69,369,758,2486,2500};
    printf("Enter element = ");
    int x;
    scanf("%d", &x);
    int len = sizeof(arr)/sizeof(arr[0]);
    int result = binary_search(arr, x, len);
    if (result == -1){
        printf("\nNOT FOUND AT ANY INDEX.");
    }
    else{
        printf("\nElement %d found at index %d.", x, result);
    }
    return 0;
}