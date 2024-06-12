/*Написать только одну функцию, которая ставит в начало
 * массива все четные элементы, а в конец – все нечетные.
 *  Не нарушайте порядок следования чисел между собой.
 * Строго согласно прототипу:.
void sort_even_odd(int n, int a[])
 * */


#include <stdio.h>
#include <stdlib.h>



int input(int n,int arr[])
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    return i;
}

void print_array (int size, int a[])
{
    for (int i=0; i<size; i++)
        printf("%d ", a [i]);
    printf ("\n");
}

//~ int inputPlus (int n,int a[])//Перевести весь масссив в плюс
//~ {
    //~ int i;
    //~ for(i=0; i<n; i++)
    //~ {
        //~ if (a[i]<0)
            //~ a[i]*=-1;
        //~ else a[i]=a[i];
    //~ }
    //~ return i;
//~ }

void SwapArr (int a[], int i, int j)
{
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

void sort_even_odd (int n, int a[])
{
    int arr [n];
    int ch=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
            arr[ch++]=a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            arr[ch++]=a[i];
    }
    for(int i=0; i<n; i++)
        a[i]=arr[i];
}
/*

//~ void sort_even_odd (int n, int a[])
//~ {
    //~ for (int i=0; i<n; i++)
    //~ {
        //~ for (int j=n-1; j>i; j--)
        //~ {
            //~ if (a[j-1]%2>=0 && a[j-1]%2 > a[j]%2)
            //~ {
                //~ SwapArr(a,j-1,j);
            //~ }
           // if (a[j-1]%2<0 && a[j-1]%2 < a[j]%2)
            {
                SwapArr(a,j,j-1);
            }
        //~ }
    //~ }
}
*/

int  main ()
{
    int a []={0};
    int size;
   // const int size1 = 1000;
    scanf ("%d", &size);
    input (size, a);
    //inputPlus (size,a);
    print_array (size, a);
    printf ("\n");
    sort_even_odd (size, a);
    print_array (size, a);
    return 0;
}
