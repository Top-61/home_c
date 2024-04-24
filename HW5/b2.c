#include <stdio.h>
int main()
{
    int a, b, i;

    scanf ("%d%d", &a, &b);
    if (a<=b && b<=100)
    for(i=a; i<=b; i++)
        {
            printf ("%d ", i*i);
        }
    else return 6;
    return 0;
}





