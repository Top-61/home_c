#include <stdio.h>

/*Составить рекурсивную функцию,
 *  которая определяет сумму всех чисел от 1 до N*/

int recur (int n);
int main()
{
    int n;
    scanf ("%d", &n);
    printf ("%d ", recur (n));
    return 0;
}

int recur (int n)
{
    int sum;
    if (n==1)
        sum=1;
    else
        sum = n+recur(n-1);
    return sum;
}





