#include <stdio.h>

/*Составить рекурсивную функцию,
 *  печать всех чисел от 1 до N.*/

void print_rec (int N);
int main()
{
    int N;
    scanf ("%d", &N);
    print_rec (N);
    return 0;
}

void print_rec (int N)
{
    if (N>1)
        print_rec (N-1);
    printf ("%d ", N);
}




