

#include <stdio.h>
int main(void)

{
    int a, b, c, max;
    scanf ("%d%d%d", &a, &b, &c);
    if (a>b)
         max=a;
    else
       max=b;

    if (max>c)
         max=max;
    else
        max=c;



    printf ("%d", max);

    return 0;

}

