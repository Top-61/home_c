#include <stdio.h>



/*Составить функцию, которая определяет
 * наибольший общий делитель двух натуральных
 * и привести пример ее использования.
int nod(int a, int b)*/

int nod (int a, int b)
{
    int div;
    if (a==b)
        return a;
    int c = a-b;
    if (c < 0)
    {
        c = -c;
        div = nod (a, c);
    }
    else
        div = nod (b, c);
    return div;
}

int main()
{
    int a,b;
    scanf ("%d%d", &a, &b);
    printf ("%d",  nod (a,b));
    return 0;
}


