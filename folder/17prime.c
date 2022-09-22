#include <stdio.h>
void main()
{
    long long int num = 1, i = 2, quo = 1;
    while (num < 10)
    {
        quo = 1;
        i++;
        long long int j = 3;
        while (i >= j)
        {
            if (i % j == 0)
                break;
            else
                quo = j;
            j+=2;
        }
        if (quo == i)
            num++;
    }
    printf("%lld", quo);
}
