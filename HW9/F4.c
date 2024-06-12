/*
Написать только одну функцию. Всю программу отправлять не надо.
 Вывести в порядке возрастания цифры, входящие в строку.
  Цифра - количество. Функция должно строго соответствовать
  прототипу:
  void print_digit(char s[]) */


#include <stdio.h>


#define SIZE 1000

void input_Ch (char s[])
{
    char ch;
    int i=0;
    while( (ch=getchar())!='\n' )
        s[i++]=ch;
    s[i]='\0';
}

void print_digit(char s[])
{
    char c;
    int arr[10]={0};
    int i=0;
    while((c = s[i++])!='\0')
    {
    int num = c-0x30;
    if( num >= 0 && num < 10)
        arr[num]++;
    }
   for(int i=0;i<10;i++)
   {
        if(arr[i])
            printf("%d %d\n",i,arr[i]);
   }
}

int main()
{
    char buffer [SIZE];
    input_Ch (buffer);
    print_digit (buffer);
    return 0;
}
