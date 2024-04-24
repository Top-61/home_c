#include <stdio.h>

int main()
{
    int n, a, b;
    scanf ("%d", &n);
    while (n>0)
    {
        a=n%10;
        b=n/10%10;
        if (b>=a)
            {
            printf("NO");
            return 0;
            }
        n=n/10;
    }
    printf("YES");
    return 0;
}



