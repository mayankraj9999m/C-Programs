#include <stdio.h>
#include <math.h>

char intToAscii(int num) {
    if (num >= 0 && num <= 9) {
        return '0' + num;
    } else {
        return '\0';  // Return null character for invalid input
    }
}

int len_int(int x)
{
    int count = 0;
    do
    {
        count++;
        x /= 10;
    } while (x != 0);
    return count;
}

void ftoa(float n, char result[], int precision)
{
    // Extract integer part
    int int_part = (int)n;
    // Extract floating part
    float dec_part = n - (float)int_part;
    // Convert integer part to string
    int len_int_part = len_int(int_part);
    int j = 0;
    int abc = int_part;
    for (int i = pow(10, len_int_part - 1); i >= 10; i /= 10)
    {
        int abcd = (int)(abc / i);
        char abcd_n = intToAscii(abcd);
        result[j] = abcd_n;
        j++;
        abc %= i;
    }
    char abc_n = intToAscii(abc);
    result[j] = abc_n;

    //  Handle decimal part
    if (precision > 0)
    {
        // Add decimal point
        result[++j] = '.';
        // Calculate and append decimal part
        int dec_part1 = (int)(dec_part * pow(10, precision));
        int len_dec_part = len_int(dec_part1);
        int l = j + 1;
        int abc1 = dec_part1;
        for (int k = pow(10, len_dec_part - 1); k >= 10; k /= 10)
        {
            int abcd1 = (int)(abc1 / k);
            char abcd1_n = intToAscii(abcd1);
            result[l] = abcd1_n;
            l++;
            abc1 %= k;
        }
        char abc1_n = intToAscii(abc1);
        result[l] = abc1_n;
        result[++l] = '\0';
    }
}

int main()
{
    char result[20];
    float n = 233.547;
    ftoa(n, result, 2);
    printf("\n\"%s\"\n", result);
    return 0;
}