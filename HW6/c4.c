#include <stdio.h>

/*Описать функцию вычисления f(x) по формуле:
 * f(x)= x*x при -2 ≤ x < 2;
 * x*x+4x+5 при x ≥ 2;
 * 4 при x < -2.
Используя эту функцию для n заданных чисел,
вычислить f(x).
Среди вычисленных значений найти наибольшее.*/

int f (int x)
{
    int res = 0;
    if ((x >= -2) && (x < 2))
        res = x*x;
    if (x >= 2)
        res = x*x+4*x+5;
    if (x <- 2)
        res = 4;
    return res;
}

int main()
{
    int a = 1, b, max = 0;
    while (a != 0)
    {
        scanf ("%d", &a);
        b = f(a);
        if (b > max)
            max = b;
    }
    printf ("%d", max);
    return 0;
}






