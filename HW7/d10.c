#include <stdio.h>

/*Дано натуральное число n ≥ 1.
 * Проверьте, является ли оно простым.
 *  Программа должна вывести слово YES,
 * если число простое или NO в противном
 * случа. Необходимо составить рекурсивную функцию и использовать ее.
int is_prime(int n, int delitel)*/

int is_prime(int n, int delitel)
{
    if (n==delitel)
        return 1;
    if ((n>1) && (n%delitel != 0))
        return is_prime (n, delitel + 1);
    else
        return 0;
}

int main()
{
    int n;
    scanf ("%d", &n);
    is_prime (n, 2) ? printf ("YES") : printf ("NO");
    return 0;
}

