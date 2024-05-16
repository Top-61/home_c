#include <stdio.h>

/*Считать массив из 12 элементов и выполнить
 циклический сдвиг ВПРАВО на 4 элемента.*/

enum {SIZE = 12};

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}


int Print_array (int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf ("%d ", arr[i]);
    return 0;
}


void Shift_array_right(int size, int arr[])
{
    for (int j=0; j<4; j++)
    {
        int tmp=arr [size-1];
        for (int i=size-1; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = tmp;
    }
}

int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);
    Shift_array_right (SIZE,arr);
    Print_array (SIZE, arr);
    return 0;
}


