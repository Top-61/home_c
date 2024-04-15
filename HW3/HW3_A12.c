

#include <stdio.h>
int main(void)

{
    int a;
    int sum;
    scanf ("%d", &a);
    sum = (a%10);
    sum = sum + (a/10)%10;
    sum = sum + (a/100)%10;
    printf ("%d" , sum);


    return 0;

}

