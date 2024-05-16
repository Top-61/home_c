#include <stdio.h>
#include <inttypes.h>


/*Составить рекурсивную функцию,
 печать всех простых множителей числа.*/

//enum {div=2}

void RecFun (int n);

int main(void)
{
    int  n;
    scanf("%d",&n);
    RecFun (n);
    return 0;
}

void RecFun (int n)
{
    static int div=2;
    if(n!=1)
    {
        if(n%div == 0)
        {
            printf("%d ",div);
            RecFun (n/div);
        }
        else
        {
            ++div;
            RecFun(n);
        }
    }
}
