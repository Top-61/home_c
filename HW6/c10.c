#include <stdio.h>



/*Простые множители
Составить функцию, печать всех простых множителей числа.
Использовать ее для печати всех простых множителей числа.
void print_simple(int n)*/

void print_simple (int n)
{
int div = 2;
    while (n != 1)
    {
        if (n%div==0)
        {
            printf ("%d ",div);
            n=n/div;
        }
        else
            div+=1;
    }
}

int main()
{
    int n;
    scanf ("%d", &n);
    print_simple (n);
    return 0;
}


