#include <stdio.h>

/*Дано натуральное число N. Выведите все
 * его цифры по одной, в прямом порядке,
 * разделяя их пробелами или новыми строками.
 *  Необходимо реализовать рекурсивную функцию.
void print_num(int num)*/

void print_num (int num)
{
    if (num>0)
    {
        print_num (num/10);
        printf ("%d ", num%10);
    }
}

int main()
{
    int num;
    scanf ("%d", &num);
    if (num >0)
        print_num (num);
    else
        printf ("%d ", 0/num);
    return 0;
}





