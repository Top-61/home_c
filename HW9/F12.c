/*Составить функцию которая меняет в массиве
 минимальный и максимальный элемент местами.
Прототип функции void change_max_min(int size, int a[]).*/

#include <locale.h>
#include <stdio.h>
#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

void Print_arr(int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf ("%d ", arr[i]);
    printf("\n");
}

void change_max_min(int size, int a[])
{
    int min=a[0], max=a[0], posmax=0, posmin=0;
    for (int i=0; i<size; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
            posmin=i;
        }
    }
    for (int j=0; j<size; j++)
    {
        if (a[j]>max)
        {
            max=a[j];
            posmax=j;
        }
    }
    a[posmin]=max;
    a[posmax]=min;
}

int main()
{
    setlocale (LC_ALL, ".utf-8");
    puts("Введите элементы массива\n");
    int arr [SIZE]={0};
    Input (SIZE,arr);
    change_max_min(SIZE, arr);
    Print_arr(SIZE, arr);
    return 0;
}

