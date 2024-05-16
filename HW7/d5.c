#include <stdio.h>

/*Перевести натуральное число
 * в двоичную систему счисления. Необходимо
 * реализовать рекурсивную функцию.*/

void print_2num (int num)
{
    if (num>0)
    {
        print_2num (num/2);
        printf ("%d", num%2);
    }
}

int main()
{
    int num;
    scanf ("%d", &num);
    if (num >0)
        print_2num (num);
    else
        printf ("%d ", 0/num);
    return 0;
}





