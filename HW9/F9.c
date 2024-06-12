/*Составить только функцию которая в массиве находит
 максимальный из отрицательных элементов и меняет
 его местами с последним элементом массива. Гарантируется,
 что в массиве только один такой элемент или же такой
 элемент отсутствует. Если отрицательных элементов нет
  - массив не менять.
Прототип функции: void swap_negmax_last(int size, int a[])*/

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

void swap_negmax_last (int size, int a[])
{
    int max_otr=a[0], num=0;
    for (int i = 0; i< size; i++)
    {
        if (max_otr>-1 && a[i] <0)
        {
            max_otr=a[i];
            num=i;
        }
        else if(max_otr < a[i] && a[i] < 0)
        {
            max_otr = a[i];
            num = i;
        }
    }
    if(max_otr<0)
    {
        a[num]=a[size-1];
        a[size-1]=max_otr;
    }
}

int main()
{
     setlocale (LC_ALL, ".utf-8");
    puts("Введите элементы массива\n");
    int arr [SIZE]={0};
    Input (SIZE,arr);
    swap_negmax_last (SIZE, arr);
    Print_arr(SIZE, arr);
    return 0;
}

