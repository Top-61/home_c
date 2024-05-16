#include <stdio.h>

/*Составить рекурсивную функцию,
 * печать всех чисел от N до 1..*/

void print_rec (int n)
{
    printf ("%d ", n);
    if (n>1)
        print_rec (n-1);
}

int main()
{
    int n;
    scanf ("%d", &n);
    print_rec (n);
    return 0;
}

