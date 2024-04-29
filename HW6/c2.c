#include <stdio.h>

/*Составить функцию, возведение числа N в степень
 * P. int power(n, p) и  * привести пример ее использования.*/

int power (int n, int p);

int main()
{
    int n, p;
    scanf ("%d%d", &n, &p);
    printf ("%d", power (n,p));
    return 0;
}

int power(int n, int p)

{
    int res = 1, i;
    for (i=1; i<=p; i++)
        res *= n;
    return res;
    }




