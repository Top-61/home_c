#include <stdio.h>
#include <ctype.h>
#include <assert.h>


/*Составить функцию, которая переводит латинскую строчную букву
в заглавную. И показать пример ее использования.*/

char otcuda (char a)
{
    return ((a >= 'a') && (a <= 'z')) ? (a - 32) : a;
}

int main()
{
char input;
    while (1)
    {
        scanf("%c", &input);
        if (input == '.')
            break;
        printf("%c", otcuda (input));
    }


    return 0;
}


