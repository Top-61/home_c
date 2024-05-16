#include <stdio.h>

/*Считать массив из 10 элементов и
 * найти в нем два максимальных элемента
 * и напечатать их сумму.*/

#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}


void Max_Arr (int n,int arr[])
{
    int max1=arr[0], max2=-arr[0];

    for(int i=1; i<SIZE; i++)
    {
        if(max1 < arr[i])
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (max2 < arr[i])
            max2 = arr[i];
    }
    printf("%d\n", max1 + max2);
}


int main()
{
    int arr [SIZE];
    Input (SIZE,arr);
    Max_Arr (SIZE, arr);
    return 0;
}


