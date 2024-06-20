/*В файле input.txt даны два слова не более 100 символов каждое,
 * разделенные одним пробелом.
 * Найдите только те символы слов, которые встречаются в обоих словах
 * только один раз. Напечатайте их через пробел в файл output.txt
 * в лексикографическом порядке.*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define STR_SIZE 26



bool One_match (char let, FILE *f)
{
    bool has_match = false;
    char c;
    while ((c=fgetc(f)) != ' ' && c != EOF && c != '\n')
    {
        if (let == c)
        {
            if (has_match)
                return false;
            has_match = true;
        }
    }
    return has_match;
}

void Find_letter (FILE *f, FILE *fn)
{
    for(int i=0; i<STR_SIZE; i++)
    {
        fseek(f, 0, SEEK_SET);
        if (One_match ('a'+i, f))
        {
            if (One_match ('a'+i, f))
            {
                fputc('a'+i, fn);
                fputc(' ', fn);
            }
        }

    }

}

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    if(f==NULL)
    {
        printf("Cannot open %s\n", input_f);
        return 1;
    }
        FILE *fn = fopen(output_f,"w");
    if(f==NULL)
    {
        printf("Cannot open %s\n", output_f);
        return 1;
    }
    Find_letter (f,fn);
    fclose (f);
    fclose (fn);
    return 0;
}
