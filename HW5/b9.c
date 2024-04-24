#include <stdio.h>

int main()
{
    int n, a;
    scanf ("%d", &n);
    while (n>0)
    {
        a=n%10%2;
        if (a!=0)
            {
            printf("NO");
            return 0;
            }
        n=n/10;
    }
    printf("YES");
    return 0;
}



