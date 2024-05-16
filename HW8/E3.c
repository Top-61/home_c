#include <stdio.h>

/*Считать массив из 10 элементов и
 *  найти в нем максимальный и минимальный
 * элементы и их номера.*/

#define SIZE 10

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}


int Max_Pos_Arr (int n, int arr[])
{
    int max = arr[0];
    int pos=0;
    for( int i=0; i<n; i++)
        {
            if (max<arr[i])
                max=arr [i], pos=i;
        }
    printf ("%d %d", pos+1, max);
    return 0;
}

int Min_Pos_Arr (int n, int arr[])
{
    int min = arr[0];
    int pos=0;
    for( int i=0; i<n; i++)
        {
            if (min>arr[i])
                min=arr [i], pos=i;
        }
    printf (" %d %d\n", pos+1, min);
    return 0;
}




int main()
{
    int arr [SIZE];
    Input (SIZE,arr);

    Max_Pos_Arr (SIZE, arr);
    Min_Pos_Arr (SIZE, arr);
    return 0;
}


