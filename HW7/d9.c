#include <stdio.h>

/*Дано натуральное число N. Вычислите сумму его цифр.
 *  Необходимо составить рекурсивную функцию.
int sum_digits(int n).*/

int sum_digits (int n)
{
    int i=n%10;
    if (n>0)
    {
        i+=sum_digits (n/10);
    }
    return i;
}

    int main()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", sum_digits (n));
    return 0;
}

