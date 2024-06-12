/*В последовательности записаны целые числа от M до N
 ( M меньше N, M больше или равно 1)в произвольном порядке,
 но одно из чисел пропущено (остальные встречаются ровно
 по одному разу). N не превосходит 1000.
 Последовательность заканчивается числом 0.
 Определить пропущенное число.*/

#include <locale.h>
#include <stdio.h>
#define SIZE 1000

int Input(int n,int arr[])
{
int i;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]==0)
        {
            n=i;
            break;
        }
    }
    return n;
}

int Print_array (int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf ("%d ", arr[i]);
    printf("\n");
    return 0;
}

void Swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void Sort_arr (int n,int arr[])
{
    for (int j=0; j < n; j++)
    {
        for (int i=0; i <n-1; i++)
        {
            if (arr[i] > arr[i + 1])
                Swap (&arr [i+1], &arr [i]);
        }
    }

}

void Func_find (int n, int arr[])
{
    for (int i = 0; i< n-1; i++)
    {
        if (arr[i+1] != arr[i]+1)
        {
        printf("%d", arr[i]+1);
        break;
        }
    }
}

int main()
{
    int arr [SIZE]={0};
    Input (SIZE,arr);
    int res=Input(SIZE,arr);
    Sort_arr (res,arr);
    Func_find (res, arr);
    return 0;
}

