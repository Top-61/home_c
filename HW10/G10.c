/*В файле input.txt дана строка слов, разделенных пробелами.
 Найти самое длинное слово и вывести его в файл output.txt.
 Случай, когда самых длинных слов может быть несколько,
 не обрабатывать.*/

#include <stdio.h>
#include <string.h>

#define STR_SIZE 1000


int Inp_Str (FILE *f, char str[])
{
    int i = 0;
    char c = 0;
    while((c = fgetc(f)) != EOF )
    {
        if((c>= 'A' && c <= 'z') || (c == ' '))
            str[i++] = c;
    }
    str[i] = '\0';
    return i;
}

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    FILE *fn = fopen(output_f,"w");

    char str[STR_SIZE];
    int num = 0, max1 = 0, max2 = 0, pos = 0, tmp = 0;
    num = Inp_Str(f,str);

    for(int i = 0; i<num;)
    {
        while(i < num && str[i++] != ' ')
            tmp++;
        if(tmp > max1)
        {
            max1 = tmp;
            pos = i - tmp-1;
            if(pos < 0)
                pos = 0;
        }
        else if (tmp > max2)
            max2 = tmp;
        tmp = 0;
    }
    if(max1 > max2)
    {
        for(int i = pos; i < pos + max1; i++)
            fputc(str[i], fn);
    }
    fclose (f);
    fclose (fn);
    return 0;
}
