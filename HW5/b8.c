#include <stdio.h>

int main()
{
    int n, a, count=0;
    scanf ("%d", &n);
    do
    {
        a=n%10;
        if (a==9)
            count++;
    }
    while (n/=10);
    if (count==1)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}



