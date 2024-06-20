/*Заменить a на b
В файле input.txt дана символьная строка не более
1000 символов. Необходимо заменить все буквы "а" на буквы "b"
и наоборот, как заглавные, так и строчные.
Результат записать в output.txt.*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 1000

int Input_str(FILE *f, char str[])
{
    int i = 0;
    char c;
    while ((c=fgetc(f))!=EOF && c != '\n')
        str[i++] = c;
    return i;
}

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    FILE *fn = fopen(output_f,"w");
    char str[STR_SIZE] = {0};
    int num = Input_str(f, str);
    for (int i =0; i<num; i++)
    {
        switch(str[i])
        {
            case 'a':
                str[i] = 'b';
                break;
            case 'b':
                str[i] = 'a';
                break;
            case 'A':
                str[i] = 'B';
                break;
            case 'B':
                str[i] = 'A';
                break;
        }
    }
    fprintf(fn, "%s", str);
    fclose (f);
    fclose (fn);
    return 0;
}
