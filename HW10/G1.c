/*Три раза
В файле input.txt дана строка. Вывести ее в файл
output.txt три раза через запятую и
показать количество символов в ней.*/

#include <stdio.h>

const int SIZE_STR = 101;

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    char str [SIZE_STR];
    char c;
    int cnt=0;
    FILE *f;
    f = fopen(input_f,"r");
    if (f != NULL)

    {
        while (((c=fgetc(f))!=EOF ) && (c !='\n'))
            str[cnt++]=c;
    }
    else
    {
        printf ("Can't open file %s\n", input_f);
    }
    fclose (f);
    f = fopen (output_f, "w");
    if (f != NULL)
    {
        for (int i=0; i<3; i++)
        {
            if(i!=0)
                fprintf(f, ", ");
            fprintf (f, "%s", str);
        }
        fprintf(f, " %d", cnt);
    }
    else
    {
        printf ("Can't open file %s\n", input_f);
    }
    fclose(f);
    return 0;
}
