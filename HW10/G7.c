/*В файле input.txt считать символьную строку, не более 10 000 символов.
  Посчитать количество строчных (маленьких) и прописных (больших) букв
  в введенной строке. Учитывать только английские буквы.
  Результат записать в файл output.txt.*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 10000


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
    char str[STR_SIZE]={0};
    int cnt_a = 0, cnt_A = 0, i;
    Input_str(f,str);
    for(i=0; i<STR_SIZE; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            cnt_a++;
        if(str[i]>='A' && str[i]<='Z')
            cnt_A++;
    }
    fprintf(fn, "%d %d", cnt_a, cnt_A);
    fclose (f);
    fclose (fn);
    return 0;
}
