#include <stdio.h>

/*Дано натуральное число N.
 * Посчитать количество «1» в двоичной записи числа.
 * Составить рекурсивную функцию.)*/

int rec_11 (int n)
{
    if (n)
    {
        return n%2 + rec_11 (n/2);
    }
    return 0;
}


int main()
{
    int n;
    scanf ("%d", &n);
    printf ("%d", rec_11 (n));
    return 0;
}

