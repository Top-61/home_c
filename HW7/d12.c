#include <stdio.h>

/*Дана монотонная последовательность, в которой каждое
 * натуральное число k встречается
 * ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,…
 * Выведите первые n членов этой последовательности.
 *  Только один цикл for.*/

#include <stdio.h>

void pr_posl (int n, int k)
{
    for (int i = 1; i <= k; i++)
    {
        printf("%d ", k);
        --n;
        if (n == 0)
        return;
    }
    pr_posl(n, k + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    pr_posl (n, 1);
    return 0;
}

