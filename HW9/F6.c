/*
Написать только одну логическую функцию,
которая определяет, верно ли, что среди элементов массива есть два
одинаковых. Если ответ «да», функция возвращает 1;
если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]) */

#include <locale.h>
#include <stdio.h>
#define SIZE 5

int Input_arr (int size, int a[])
{
    int i;
    for (i =0; i < size; i++)
        scanf ("%d ", &a[i]);
    return i;
}

int is_two_same(int size, int a[])
{
    for (int i =0; i < size; i++)
        for (int j=i+1; j<size; j++)
            if (a[i]==a[j])
                return 1;
    return 0;
}

int main()
{
    setlocale (LC_ALL, ".utf-8");
    puts("Введите элементы массива\n");
    int  arr[SIZE]={0};
    Input_arr (SIZE, arr);
    is_two_same (SIZE, arr);
    printf("%d\n", is_two_same(SIZE, arr));
    return 0;
}
