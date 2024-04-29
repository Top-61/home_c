#include <stdio.h>



/*Факториал
Составить функцию вычисления N!. Использовать
ее при вычислении факториала
int factorial(int n).*/

int factorial (int n)
{
    int fact = 1, i;
    for (i=2; i<=n; i++)
    fact*=i;

        return fact;
}

int main()
{
    int a;
    scanf ("%d", &a);
    printf ("%d", factorial (a));
    return 0;
}


