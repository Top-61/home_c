#include <stdio.h>

    int main()
{
    int a, b, i, sum;
    sum =0;
    scanf ("%d%d", &a, &b);
    if (a<=b && b<=100)

        for(i=a; i<=b; i++)
        {
            sum+=i*i;
        }
    printf ("%d\n", sum);

    return 0;
}



