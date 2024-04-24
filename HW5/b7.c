#include <stdio.h>

int main()
{
    int n, a, b;
    scanf ("%d", &n);
    while (n>0)
    {
        a=n%10;
        b=n/10;
               while (b>0)
            {
                if (a == b%10)
                {
                printf("YES");
                return 0;
                }
            b=b/10;
            }
        n=n/10;
    }
    printf("NO");
    return 0;
}



