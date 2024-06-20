/*В файле input.txt символьная строка не более
 * 1000 символов. Необходимо проверить,
 * является ли она палиндромом (палиндром читается одинаково
 *  в обоих направлениях).
 * Реализовать логическую функцию is_palindrom(str) и
 *  записать ответ в файл output.txt.*/

#include <stdio.h>
#include <string.h>
#define STR_SIZE 1000

int is_palindrom(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len - i -1])
            return 0;
    }
    return 1;
}

int main(void)
{
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    FILE *fn = fopen(output_f,"w");
    char str[STR_SIZE] = {0};
    fscanf(f, "%[^\n]", str);

    fprintf(fn, "%s", is_palindrom(str) ? "YES" : "NO");
    fclose (f);
    fclose (fn);
    return 0;
}
