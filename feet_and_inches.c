#include <stdio.h>
#include <stdlib.h>

struct InchFeet
{
    int feet;
    float inch;
};

void add(struct InchFeet *inchfeet, int n)
{
    int feet;
    float inches;
    for (int i = 0; i < n; i++)
    {
        feet += (inchfeet + i)->feet;
        inches += (inchfeet + i)->inch;
    }
    if (inches > 12)
    {
        int additional = inches / 12;
        float remaining = inches - additional*12;
        inches = remaining;
        feet += additional;
    }
    printf("Feets = %d\n", feet);
    printf("Inches = %f\n", inches);
}

int main()
{
    int n;
    printf("How many data? = ");
    scanf("%d", &n);

    // Clear the input buffer after scanf
    getchar();

    struct InchFeet *inchfeet = (struct InchFeet *)malloc(n * sizeof(struct InchFeet));

    for (int i = 0; i < n; i++)
    {
        printf("Feet = ");
        scanf("%d", &inchfeet[i].feet);
        printf("Inches = ");
        scanf("%f", &inchfeet[i].inch);
        printf("----------------------------------\n");
    }
    add(inchfeet, n);
    return 0;
}