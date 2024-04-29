#include <stdio.h>

/*Составить функцию, которая переводит число
N из десятичной системы счисления в
P-ичную систему счисления.*/

int func (int n, int p);

int main()
{
    int n, p;
    scanf ("%d%d", &n, &p);
    printf ("%d", func (n, p));
    return 0;
}

/* Очень сложная математика!
 Разобраться можно, но потратить время - вагон!
 Лучше тратить на тренировку написания самого кода?*/

int func (int n, int p)
{
int remainder;
int exponent = 1;
int res = 0;
    for(; n > 0; n /= p)
    {
        remainder = n % p;
        res += remainder * exponent;
        exponent *= 10;
    }
    return res;
    }





