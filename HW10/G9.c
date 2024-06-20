#include <stdio.h>

/* G9
 * В файле input.txt строка из меленьких и больших английских
 * букв, знаков препинания и пробелов. Требуется удалить из
 *  нее повторяющиеся и все пробелы.
 * Результат записать в файл output.txt.
*/

int main(void) {
    int len = 0;
    char input_f[] = "input.txt";
    char output_f[] = "output.txt";
    FILE *f = fopen(input_f,"r");
    FILE *fn = fopen(output_f,"w");
    fseek(f, 0, SEEK_END);
    len = ftell(f);

    char str[len];
    rewind(f);
    fread(str, sizeof(str[0]), len, f);
    fclose(f);

    for (int i = 0; i < len - 1; ++i)
    {
        for (int j = i + 1; j < len; ++j)
        {
            if (str[i] == str[j])
                str[j] = 0;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if ((str[i] == ' ') || (str[i] == 0))
        {
            for (size_t j = i; j < len - 1; ++j)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }
    fn= fopen("output.txt", "w");
    fwrite(str, sizeof(str[0]), len, fn);


    return 0;
}
