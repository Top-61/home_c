#include <stdio.h>

/*Считать массив из 10 элементов и выполнить инверсию отдельно
 *  для 1-ой и 2-ой половин массива. Необходимо изменить
 * считанный массив и напечатать его одним циклом.*/

#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

int print_array (int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf ("%d ", arr[i]);
    return 0;
}


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void revers_array (int size, int a[])
{
    for(int i=0; i<size/2; i++)
        swap(a+i, a+size-1-i);
}

int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);

    for(int i=0; i<2; i++)
        revers_array (SIZE/2, arr+i*SIZE/2);
    print_array (SIZE, arr);
    return 0;
}


