/*В файле input.txt дана строка, не более 1000 символов,
 содержащая буквы, целые числа и иные символы.
 Требуется все числа, которые встречаются в строке,
 поместить в отдельный целочисленный массив.
 Например, если дана строка "data 48 call 9 read13 blank0a",
 то в массиве числа 48, 9, 13 и 0.
 Вывести массив по возрастанию в файл output.txt..*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 1000

void Swap (int arr [], int i, int j)
{
    int temp = arr [i];
    arr [i] = arr [j];
    arr [j] = temp;
}

void Sort_arr (int len, int arr [])
{
    for (int i = 0; i < len; i++)
    {
        for (int j = len-1; j > i; j--)
        {
            if (arr[j-1]>arr[j])
            {
                Swap (arr,j-1,j);
            }
        }
    }
}

int Array (FILE *f, int arr[])
{
    int i = 0;
    char c = 0, let = 'a';
    while((c = fgetc(f)) != EOF )
    {
        if(c>= '0' && c <= '9')
        {
            arr[i] *= 10;
            arr[i] += c - '0';
        }
        else if(let >='0' && let <= '9')
        {
            i++;
        }
        let = c;
    }
    return i;
}

void Print_arr (int arr[],int n,FILE *fn)
{

    for(int i=0; i<n; i++)
        fprintf (fn, "%d ", arr[i]);
}

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    FILE *fn = fopen(output_f,"w");
    int arr[STR_SIZE]={0};
    int n = 0;
    n = Array(f,arr);
    Sort_arr (n, arr);
    Print_arr(arr, n, fn);
    fclose (f);
    fclose (fn);
    return 0;
}
