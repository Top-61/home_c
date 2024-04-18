

#include <stdio.h>
int main(void)

{
    int a, b, c, d, e, max;
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a>b) max=a;
    else if (b>a) max=b;
    else if (c>max) max=c;
    else if (d>max) max=d;
    else if (e>max) max=e;
    else max=e;



    printf ("%d", max);

    return 0;

}

