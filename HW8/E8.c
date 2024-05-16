#include <stdio.h>

/*Считать массив из 12 элементов и
выполнить инверсию для каждой трети массива.*/

const int SIZE = 12;

int Input(int n,int arr[]);
int print_array (int n,int arr[]);
void swap(int* a, int* b);
void revers_array (int size, int a[]);

int main()
{
    int arr [SIZE];
    Input (SIZE,arr);

    for(int i=0; i<3; i++)
        revers_array (SIZE/3, arr+i*SIZE/3);
    print_array (SIZE, arr);
    return 0;
}

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

