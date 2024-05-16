#include <stdio.h>

/*Составить рекурсивную функцию,
 * Выведите все числа от A до B включительно,
 * в порядке возрастания, если A < B,
 * или в порядке убывания в противном случае.*/

void print_AB (int a, int b)
{
    if (a<b)
    {
        printf ("%d ", a);
        print_AB (++a, b);
    }
    else if (a>b)
    {
        printf ("%d ", a);
        print_AB (--a, b);
    }
    else
        printf ("%d ", a);
}

    int main()
{
    int a, b;
    scanf ("%d%d", &a, &b);
    print_AB (a,b);
    return 0;
}

