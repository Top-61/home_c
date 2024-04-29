#include <stdio.h>



/*Факториал
Составить функцию вычисления N!. Использовать
ее при вычислении факториала
int factorial(int n).*/

int factorial (int n)
{
    int fact = n;
    if (n>1)
        fact *= factorial(n-1);
    return fact;
}

int main()
{
    int a;
    scanf ("%d", &a);
    printf ("%d", factorial (a));
    return 0;
}


