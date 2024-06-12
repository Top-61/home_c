/*Составить функцию которая возвращает количество
 элементов на заданном отрезке [from, to] для массива.
 Прототип функции int count_between(int from, int to, int size, int a[])
 Например, на отрезке [4, 6] в массиве 1 2 3 4 5 6 7 8 9 10 функция вернет 3 значения*/

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

int count_between(int from, int to, int size, int a[])
{
    int cnt=0;
    for (int i=0; i<size; i++)
    {
        if (a[i]>=from && a[i]<=to)
            cnt++;
    }
    return cnt;
}

int main()
{
    setlocale (LC_ALL, ".utf-8");
    puts("Введите элементы массива\n");
    int arr [SIZE]={0};
    Input (SIZE,arr);
    int from, to;
    scanf ("%d %d", &from, &to);
    printf("%d", count_between (from, to, SIZE, arr));
    return 0;
}

