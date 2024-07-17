#include <stdio.h>
int primecheck(int x){
    int i;
    if (x > 3){
        for (i=2; i<=x/2; i++){
            if (x%i == 0){
                return 0;
                }
            else if (i > (x/2-1)){
                return x;
                }
        }}
    else if (x == 2 || x == 3){
        return x;
    }
    return 0;
}
int main()
{
    int n, i;
    printf("Enter upper bound : ");
    scanf("%d", &n);
    printf("********************************\n");
    printf("PRIME NUMBERS FROM 1 --> %d\n", n);
    printf("********************************\n");
    for (i = 0; i <= n; i++)
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