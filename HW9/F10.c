/*Дана строка состоящая из маленьких латинских букв 'a'..'z'.
В конце строки точка. Необходимо заменить повторяющиеся
буквы  на <буква><количество повторений>*/

#include <locale.h>
#include <stdio.h>
#define SIZE 1000

int Input (int num, char arr[])
{
    char ch;
    int cnt=0;
    while (cnt<num)
    {
        scanf("%c", &ch);
            if (ch=='.')
                return cnt;
        arr[cnt++]=ch;
    }
    return cnt;
}

void Print_func(int num, char simvol[], int cnt[])
{
    for(int i=0; i<num; i++)
        printf ("%c%d", simvol[i], cnt[i]);
    printf("\n");
}

int CountSymbols(int num,char arr[],char simvol[],int cnt[])
{
    int cntSim = 1;
    int outCnt = 0;
    int i;
    for(i = 0; i < num-1; i++)
        if(arr[i] == arr[i + 1])
            cntSim++;
        else
        {
            simvol[outCnt] = arr[i];
            cnt[outCnt++] = cntSim;
            cntSim = 1;
        }
    simvol[outCnt] = arr[i];
    cnt[outCnt++] = cntSim;
    return outCnt;
}


int main()
{
    //~ setlocale (LC_ALL, ".utf-8");
    //~ puts("Введите строчные прописные буквы, завершение '.'\n");
    int cnt [SIZE]={0};
    char buf[SIZE], simvol [SIZE];
    int num = Input(SIZE, buf);
    int numCnt = CountSymbols(num,buf, simvol, cnt);
    Print_func(numCnt, simvol, cnt);
    return 0;
}

