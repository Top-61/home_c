/*Дан целочисленный массив из 30 элементов.
Элементы массива могут принимать произвольные целые
 значения помещающиеся в int. Необходимо создать функцию,
 которая находит и выводит в порядке возрастания номера
  двух элементов массива, сумма которых минимальна.*/

#include <locale.h>
#include <stdio.h>
#define SIZE 30

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

void Find_pos (int n,int arr[])
{
    int min1=arr[0], min2=arr[1], pos1=0, pos2=1;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (arr[i]+arr[j] < min1+min2)
            {
                min1=arr[i], pos1=i;
                min2=arr[j], pos2=j;
            }


    printf("%d %d", pos1, pos2);
}

int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);
    Find_pos(SIZE, arr);
    return 0;
}

