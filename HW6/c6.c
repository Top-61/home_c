#include <stdio.h>

/*Когда создатель шахмат, древнеиндийский мудрец и
 * математик Сисса бен Дахир, показал своё изобретение
 * Правителю страны, тому так понравилась игра, что он
 * позволил изобретателю право самому выбрать награду.
 * Мудрец попросил у Повелителя за первую клетку шахматной
 * доски заплатить ему одно зерно риса, за второе — два,
 *  за третье — четыре и т. д., удваивая количество зёрен
 * на каждой следующей клетке. Помоги повелителю сосчитать
 * сколько зерен на какой клетке лежит.*/

unsigned long long int f (int x)

{
   unsigned long long int res = 1;
    {
        if (x>1)
        {
            for (int i=2; i <=x ; i++)
            res*=2;
        }
        return res;
        return 1;
    }
}

int main()
{
    int  x;
    scanf ("%d", &x);
    printf ("%llu", f(x));
    return 0;
}






