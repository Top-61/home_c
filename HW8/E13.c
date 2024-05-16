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

int Sort_arr (int arr[], int arr2 [])
{
    int nul=0, ch=0;
    for (int j=0; j < SIZE; j++)
    {
        nul = arr[j]/10%10;
        if (nul==0)
            arr2[ch++]=arr[j];
    }
    return ch;
}

int main()
{
    int arr [SIZE]={0};
    int arr2 [SIZE]={0};
    int res = 0;
    Input (SIZE,arr);
    Sort_arr (arr, arr2);
    res = Sort_arr (arr, arr2);
    Print_array (res, arr2);
    return 0;
}


