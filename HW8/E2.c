#include <stdio.h>

/*Ввести c клавиатуры массив из 5 элементов,
 *  найти минимальный из них..*/

#define SIZE 5

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

int Min_Arr (int n, int arr[])
{
    int min = arr[0];
    for(int i=0; i<n; i++)
        {
            if (min>arr[i])
                min=arr [i];
        }
    printf ("%d", min);
    return 0;
}

int main()
{
    int arr [SIZE];
    Input (SIZE,arr);
    Min_Arr (SIZE, arr);
    return 0;
}


