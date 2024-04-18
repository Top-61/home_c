

#include <stdio.h>
int main(void)

{
    int a, max;
    scanf ("%d", &a);
    max = (a%10) > (a/10%10) ? (a%10) : (a/10%10);
    max = max > (a/100%10) ? max : (a/100%10);

    printf ("%d" ,  max );


    return 0;

}
