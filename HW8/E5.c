#include <stdio.h>

/*Считать массив из 10 элементов и посчитать сумму
 * положительных элементов массива.*/

#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

void Sum_Arr (int n,int arr[])
{
    int sum=0;
    for(int i=0; i<SIZE; i++)
    {
        if(arr[i]>0)
            sum+=arr[i];
    }
    printf("%d", sum);
}

int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);
    Sum_Arr (SIZE, arr);
    return 0;
}


