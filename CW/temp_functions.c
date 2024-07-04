#include "temp_functions.h"
// преобразование номера месяца в его название
void MonthName(char* month, int number)
{
    switch (number)
    {
    case 1:
        strcpy(month, "Январь  ");
        break;
    case 2:
        strcpy(month, "Февраль ");
        break;
    case 3:
        strcpy(month, "Март    ");
        break;
    case 4:
        strcpy(month, "Апрель  ");
        break;
    case 5:
        strcpy(month,"Май     ");
        break;
    case 6:
        strcpy(month, "Июнь    ");
        break;
    case 7:
        strcpy(month, "Июль    ");
        break;
    case 8:
        strcpy(month, "Август  ");
        break;
    case 9:
        strcpy(month, "Сентябрь");
        break;
    case 10:
        strcpy(month, "Октябрь ");
        break;
    case 11:
        strcpy(month, "Ноябрь  ");
        break;
    case 12:
        strcpy(month, "Декабрь ");
        break;
     default:
        strcpy(month, "NON");
    break;
    }
}
//Ввод данных
int Input_data(Struct_line *log, char *file_name)
{
    FILE *f_in = fopen(file_name, "r");
// Проверка
    if (f_in == NULL)                           
    {
        printf("Файл не найден\nДля справки введите -h\n\n");
        fclose(f_in);
        return 0;
    }

    uint32_t str = 1000;
//Выделение памяти
    log->data_line = (Struct_data* ) malloc(sizeof(Struct_data)*str);
    if (log->data_line == NULL)
        printf("Ошибка памяти\n");
    log->num_line = 0;
    char line[50] = {0};
    uint32_t count = 1;
    // Считывание строк
    while (fgets(line, sizeof(line), f_in))
    {
        if (sscanf(line, "%d; %d; %d; %d; %d; %d",        
                   &log->data_line[log->num_line].year, 
                   &log->data_line[log->num_line].month,
                   &log->data_line[log->num_line].day,
                   &log->data_line[log->num_line].hour,
                   &log->data_line[log->num_line].minute,
                   &log->data_line[log->num_line].temp) != 6)
            printf("Ошибка считывания строки %d\n", count++);
        else
            count++, log->num_line++;
        //Добавление памяти
        if (log->num_line >= str)                              
            {
                str += 1000;
                log->data_line = (Struct_data*) realloc(log->data_line, sizeof(Struct_data)*str);
            } 
    }
    fclose(f_in);
    return count;
}
//Статистика за месяц
void Stat_month(Struct_line *log, int month)      
{
    int max_temp = -100, min_temp = 100;
    int64_t avr_temp = 0;
    uint32_t count = 0;
    char month_name[20];
    for (uint32_t i = 0; i < log->num_line; i++)
    {
        if (log->data_line[i].month == month)
        {
            count++;
            //обработка данных
            avr_temp += log->data_line[i].temp;         
            if (log->data_line[i].temp > max_temp)      
                max_temp = log->data_line[i].temp;
            if (log->data_line[i].temp < min_temp)
                min_temp = log->data_line[i].temp;
        }
    }
    if (count != 0)                                     
    {
        MonthName(month_name, month);
        printf("==============================================\n");
        printf("|   Месяц   |   Мин.   |   Макс.  |  Среднее |\n");
        printf("|           | значение | значение | значение |\n");
        printf("----------------------------------------------\n");
        printf("| %8s  |   %3d    |   %3d    |   %5.1f  |\n", month_name, min_temp, max_temp, (float)avr_temp / count);
        printf("==============================================\n");
    }
    //если нет данных
    else                                               
    {
        printf("|------------------------------------------------|\n");
        printf("|          В %2d месяце нет данных                |\n", month);
        printf("|------------------------------------------------|\n");
    }
}
//статистика за год
void Stat_year(Struct_line *log)                             
{
    int max_temp = -100, min_temp = 100, max_year = -100, min_year = 100;
    float year_temp;
    int64_t avr_temp = 0;
    uint32_t count = 0;
    int cnt_month = 0;
    char month_name[20];
   //заголовок таблицы
    printf("==============================================\n");
    printf("|   Месяц   |   Мин.   |   Макс.  |  Среднее |\n");
    printf("|           | значение | значение | значение |\n");
    printf("----------------------------------------------\n");
    //обработка месяцев
    for (int m = 0; m < 12; m++)                        
    {
        for (uint32_t i = 0; i < log->num_line; i++)
        {
            if (log->data_line[i].month == (m + 1))      
            {
                count++;  
                //обработка данных                               
                avr_temp += log->data_line[i].temp;
                if (log->data_line[i].temp > max_temp)  
                    max_temp = log->data_line[i].temp;
                if (log->data_line[i].temp < min_temp)
                    min_temp = log->data_line[i].temp;
            }
        }
        // данные за месяц
        if (count != 0)                                
        {
            MonthName(month_name, m+1);
            printf("|  %8s |   %3d    |   %3d    |   %5.1f  |\n", month_name, min_temp, max_temp, (float) avr_temp / count);
            printf("|--------------------------------------------|\n");
            cnt_month++;
        }
        // нет данных за месяц
        else                                         
        {
            printf("|         В %2d месяце нет данных             |\n", m + 1);
            printf("|--------------------------------------------|\n");
        }
        //обработка данных
        if (max_year < max_temp)                        
            max_year = max_temp;
        if (min_year > min_temp)
            min_year = min_temp;
        year_temp += (float)avr_temp / count;          
        max_temp = -100, min_temp = 100;
        avr_temp = 0;
        count = 0;
    }
    printf("|  За год   |   %3d    |   %3d    |   %5.1f  |\n", min_year, max_year, (float)year_temp / cnt_month);
    printf("==============================================\n");
}
