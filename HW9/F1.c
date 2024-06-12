/*Написать только одну функцию, которая сортирует массив по возрастанию.
 * Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[]).
Всю программу загружать не надо, только одну
эту функцию. Можно просто закомментировать текст всей программы,
кроме данной функции..*/


//~ #include <stdio.h>



//~ int input(int n,int arr[])
//~ {
//~ int i,num;
    //~ while(scanf("%d",&num)==1)
        //~ arr[i++] = num;
    //~ return i;
//~ }

void SwapArr (int a[], int i, int j)
{
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

void sort_array (int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j > i; j--)
        {
            if (a[j-1]>a[j])
            {
                SwapArr(a,j-1,j);
            }
        }
    }
}

//~ void print_array (int size, int a[])
//~ {
    //~ for (int i=0; i<size; i++)
        //~ printf("%d ", a [i]);
    //~ printf ("\n");
//~ }

//~ int  main ()
//~ {
    //~ int a []={0};
    //~ int size;
    //~ scanf ("%d", &size);
    //~ input (size, a);
    //~ print_array (size, a);
    //~ sort_array (size, a);
    //~ print_array (size, a);
    //~ return 0;
//~ }
