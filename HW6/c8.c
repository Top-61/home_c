#include <stdio.h>
#include <ctype.h>
#include <assert.h>


/*Составить функцию, которая переводит латинскую строчную букву
в заглавную. И показать пример ее использования.*/

int toup (char c)
{
    return c - 0x20 ;
}

int main(void)
{
    char c;
    while ((c = getchar())!='.')
    {
        if(c > 0x60 && c < 0x7B)
            c = toupper(c);
        putchar(c);
    }
    putchar('\n');
    return 0;
}


