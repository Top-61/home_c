#include <stdio.h>

/*Считать массив из 12 элементов и посчитать
 * среднее арифметическое элементов массива.*/

const int Arr = 12;

int main(void)
{
    float sum_aver = 0;
    for (int i = 0; i < Arr; i++)
    {
        int num;
        scanf("%d", &num);
        sum_aver += num;
    }

    printf("%.2f\n", sum_aver/Arr);
    return 0;
}
