/*
Написать только одну функцию, которая находит
 максимальный элемент в массиве. Всю программу
 загружать не надо.
Прототип функции:
int find_max_array(int size, int a[]) */


#include <stdio.h>
#define SIZE 5

int Input_arr (int size, int a[])
{
    int i;
    for (i =0; i < size; i++)
        scanf ("%d ", &a[i]);
    return i;
}

int find_max_array(int size, int a[])
{
    int max=a[0];
    for (int i =0; i < size; i++)
        if (a[i]>max)
        {
            max=a[i];
        }
    return max;
}

int main()
{
    int  arr[SIZE]={0};
    Input_arr (SIZE, arr);
    find_max_array (SIZE, arr);
    printf("%d", find_max_array (SIZE, arr));

    return 0;
}
