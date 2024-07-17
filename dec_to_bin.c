#include <stdio.h>

int dec_to_bin(int x)
{
    int bin_array[100];
    int i = 0;
    while (x != 0)
    {
        int rem;
        rem = x % 2;
        bin_array[i] = rem;
        x = x / 2;
        i++;
    }
    printf("Binary number = ");
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        printf("%d", bin_array[j]); 
}

int main()
{
    int x;
    printf("Input a decimal number = ");
    scanf("%d", &x);
    dec_to_bin(x);
}