#include <stdio.h>

/*Считать массив из 10 элементов и отсортировать первую половину
 по возрастанию, а вторую – по убыванию..*/

enum {SIZE = 10};

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

void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Sort_max (int n,int arr[])
{
    for (int j=0; j < SIZE/2; j++)
    {
        for (int i=0; i <SIZE/2-1; i++)
        {
            if (arr[i] > arr[i + 1])
                Swap (&arr [i+1], &arr [i]);
        }
    }
}

void Sort_min (int n, int arr[])
{
    for (int j=0; j < SIZE/2; j++)
    {
        for (int i=SIZE-1; i > SIZE-SIZE/2; i--)
        {
            if (arr[i] > arr[i - 1])
                Swap (&arr [i-1], &arr [i]);
        }
    }
}


int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);
    Sort_max (SIZE,arr);
    Sort_min (SIZE,arr);
    Print_array (SIZE, arr);
    return 0;
}


