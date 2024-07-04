#include "temp_functions.h"

Struct_line log_data;

int main(int argc, char *argv[])
{
    setlocale (LC_ALL, ".utf-8");
    int month = 0;                                          
    char file_name[100] = {0};
    int rez = 0;
    opterr = 0;                                          
    if (argc == 1)                                           
    {                                                         
        printf("Введите имя файла -f[имя]\n Для получения справки ведите -h\n\n");
        return 2;
    }
    while ((rez = getopt(argc, argv, "hf:m:")) != -1)
    {
        switch (rez)
        {
        case 'h':                                                                                     
            printf("\nCправка\n");
            printf("-------------------------------------------------------------------------\n");
            printf("-f [введите название файла для получения информации за год]\n"); 
            printf("-m [дополнительно введите номер месяца для получения информации за месяц]\n"); 
            printf("-------------------------------------------------------------------------\n");
            return 0;
        case 'f':                                             
            printf("\nИмя файла: %s\n", optarg);                   
            sscanf(optarg, "%s", file_name);
            break;
        case 'm':                                              
            printf("Месяц: %s\n", optarg);
            sscanf(optarg, "%d", &month);
            break;
        case '?':                                               
            printf("Неизвестный аргумент.\nДля справки введите -h\n\n");
            return 1;
        }
    }
    if (Input_data(&log_data, file_name) == 0)                     
        return -1;                                             
    if (month < 1 || month > 12)                                
        Stat_year(&log_data);                                   
    else                                                
        Stat_month(&log_data, month);
    return 0;
}