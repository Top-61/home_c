/*В файле input.txt дана строка из 1000 символов.
 *  Показать номера символов, совпадающих с последним
 * символом строки. Результат записать в файл output.txt*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 1000

int Input_str(FILE *f, char str[])
{
    int i = 0;
    char c = 0;
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

    char str[STR_SIZE] = {'\0'};
    char last = 0;
    int num_last = 0;

    num_last = Input_str(f, str) - 1;
    last=str[num_last];
    fclose (f);

    for(int i=0; i<num_last; i++)
    {
        if(str[i]==last)
            fprintf(fn, "%d ", i);
    }
    fclose (fn);

    return 0;
}
