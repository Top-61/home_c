

#include <stdio.h>
#include <locale.h>


int main(voic)
{
    setlocale(LC_ALL, "RUS");
    printf("    ������� 4_1\n");

    printf("    ������� ����������\n");
    printf("    A   B   A->B  !A||b\n");
    printf("    1   1    0       0\n");
    printf("    1   0    1       1\n");
    printf("    0   1    1       1\n");
    printf("    0   0    1       1\n");
    printf("������� ���������\n");


    printf("               \n");
    printf("    ������� 4_2\n");
    printf("    ������� ����������\n");
    printf("    A   B   A&&B  !A&&!B  ||  A<->B\n");
    printf("    1   1    1      0      1    1\n");
    printf("    1   0    0      0      0    0\n");
    printf("    0   1    0      0      0    0\n");
    printf("    0   0    0      1      1    1\n");
    printf("������� ���������\n");

    return 0;
}

