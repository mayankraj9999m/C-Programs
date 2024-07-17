#include <stdio.h>
int primecheck(int x)
{
    if (x > 3)
    {
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
            else if (i > (x / 2 - 1))
            {
                return x;
            }
        }
    }
    else if (x == 2 || x == 3)
    {
        return x;
    }
    return 0;
}

int main()
{
    int n1, n2, i;
    printf("Enter lower bound : ");
    scanf("%d", &n1);
    printf("Enter upper bound : ");
    scanf("%d", &n2);
    printf("********************************\n");
    printf("PRIME NUMBERS FROM %d --> %d\n", n1, n2);
    printf("********************************\n");
    for (i = n1; i <= n2; i++)
    {
        int b = primecheck(i);
        switch (b)
        {
        case 0:
            continue;
        default:
            printf("%d\n", b);
        }
    }
}