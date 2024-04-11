

#include <stdio.h>
#include <locale.h>


int main(voic)
{
    setlocale(LC_ALL, "RUS");
    printf("    Задание 4_1\n");

    printf("    Таблица истинности\n");
    printf("    A   B   A->B  !A||b\n");
    printf("    1   1    0       0\n");
    printf("    1   0    1       1\n");
    printf("    0   1    1       1\n");
    printf("    0   0    1       1\n");
    printf("Таблицы совпадают\n");


    printf("               \n");
    printf("    Задание 4_2\n");
    printf("    Таблица истинности\n");
    printf("    A   B   A&&B  !A&&!B  ||  A<->B\n");
    printf("    1   1    1      0      1    1\n");
    printf("    1   0    0      0      0    0\n");
    printf("    0   1    0      0      0    0\n");
    printf("    0   0    0      1      1    1\n");
    printf("Таблицы совпадают\n");

    return 0;
}

