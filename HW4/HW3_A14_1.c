

#include <stdio.h>
int main(void)

{
    int a, max;
    scanf ("%d", &a);
    if (a%10 > a/10%10)
        max = (a%10);
    else
        max = (a/10%10);
    if (max > a/100%10)
        max = max;
    else
        max = (a/100%10);

    printf ("%d" ,  max );


    return 0;

}
