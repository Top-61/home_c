#include <stdio.h>

/*Дана строка заканчивающаяся символом точка '.'
 *  Напечатать строку наоборот.
 * Реализуйте рекурсивную функцию, которая считывает и печатает
 * строку наоборот.
void reverse_string().*/

void reverse_string()
{
    char c;
    if ((c = getchar ()) != '.')
        reverse_string();
    if (c != '.')
        putchar (c);
}

int main()
{
    reverse_string();
    return 0;
}





