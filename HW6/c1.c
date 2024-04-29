#include <stdio.h>

/*Составить функцию, модуль числа
и привести пример ее использования.*/

int abs (int a);
int main()
{
    int a;
    scanf ("%d", &a);
    printf ("%d", abs (a));
    return 0;
}

int abs (int a)
{   if (a<0)
        return !a;
    else
        return a;
}




