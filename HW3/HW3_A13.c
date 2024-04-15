

#include <stdio.h>
int main(void)

{
    int a;
    int b;
    scanf ("%d", &a);
    b = a%10*(a/10%10)*(a/100%10);
    printf ("%d" ,  b );


    return 0;

}
