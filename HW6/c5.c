#include <stdio.h>

/*Составить функцию, которая определяет сумму всех чисел
 * от 1 до N и привести пример ее использования.*/

int sum (int N)

{
    int res = 0;
    for (int i=1 ; i <=N ; i++)
        res+=i;
    return res;
}

int main()
{
    int  N;
    scanf ("%d", &N);
    printf ("%d", sum (N));
    return 0;
}






