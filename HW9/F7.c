/*
Написать функцию, которая сжимает серии массива,
состоящего из единиц и нулей по следующему
принципу: например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1]
преобразуется в [4,7,2,4] (т.к. начинается с нуля, то сразу
 записывается количество элементов первой серии); а массив
 [1,1,1,0,0,0,0,0,0,0] преобразуется в [0,3,7] (т.к. первая серия -
  это единицы, то первый элемент преобразованного массива 0).
Необходимо реализовать только одну функцию,
 всю программу загружать не надо.
 Прототип функции: int compression(int a[], int b[], int N)*/

#include <locale.h>
#include <stdio.h>
#define SIZE 100

int Input_arr (int size, int a[])
{
    int i;
    for (i=0; i < size; i++)
        scanf ("%d ", &a[i]);
    return i;
}

int compression(int a[], int b[], int N)
{
    int num_in=1, num_out=0;
    if (a[0])
        b[num_out++]=0;
    for (int i = 0; i < SIZE-1; i++)
    {
        if(a[i]==a[i+1])
            num_in++;
        else
        {
            b[num_out++] = num_in;
            num_in=1;
        }
    }
    b[num_out++]= num_in;
    return num_out;
}

void Print_arr (int size, int b[])
{
    //printf("%d ", b[0]);
    for (int i=0; i < size; i++)
        printf ("%d ", b[i]);
    printf("\n");

}
int main()
{
    setlocale (LC_ALL, ".utf-8");
    puts("Введите элементы массива\n");
    int a[SIZE]={0};
    int b[SIZE]={0};
    Input_arr (SIZE, a);
    int count=compression(a, b, SIZE);
    Print_arr (count, b);
    return 0;
}
