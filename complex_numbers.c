#include <stdio.h>
#include <stdlib.h>

struct ComplexNumbers
{
    float real;
    float imaginary;
};

void add(struct ComplexNumbers *complex, int n)
{
    float real;
    float imag;
    for (int i = 0; i < n; i++)
    {
        real += (complex + i)->real;
        imag += (complex + i)->imaginary;
    }
    printf("Complex Number = %f + %fi", real, imag);
}

int main()
{
    int n;
    printf("How many complex numbers? = ");
    scanf("%d", &n);

    // Clear the input buffer after scanf
    getchar();

    struct ComplexNumbers *compexnums = (struct ComplexNumbers *)malloc(n * sizeof(struct ComplexNumbers));

    for (int i = 0; i < n; i++)
    {
        printf("Real part = ");
        scanf("%f", &compexnums[i].real);
        printf("Imaginary part = ");
        scanf("%f", &compexnums[i].imaginary);
        printf("----------------------------------\n");
    }
    add(compexnums, n);
    return 0;
}