

#include <stdio.h>
int main(void)

{
    int a, b, c, d, e, max;
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a>b)
        max=a;
    else
        max=b;
    if (max>c)
        max=max;
    else
        max=c;
    if (max>d)
        max=max;
    else max=d;
    if (max>e)
        max=max;
    else max=e;



    printf ("%d", max);

    return 0;

}

