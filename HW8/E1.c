#include <stdio.h>

/*Ввести c клавиатуры массив из 5 элементов, найти среднее
 * арифметическое всех элементов массива.*/

#define SIZE 5

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

int Average (int n, int arr[])
{
    float aver=0;
    for(int i=0; i<n; i++)
        {
            aver +=arr[i];
        }
    printf ("%.3f", aver/=SIZE);
    return 0;
}

int main()
{
    int arr [SIZE];
    Input(SIZE,arr);
    Average (SIZE, arr);

    return 0;
}


