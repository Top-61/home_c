#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <locale.h>
 
typedef struct
{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temp;
} Struct_data;

typedef struct
{
    uint32_t num_line;
    Struct_data* data_line;          
} Struct_line;

int Input_data(Struct_line *log, char *file_name);
void MonthName(char* month, int number);
void Stat_month (Struct_line *log, int month);
void Stat_year (Struct_line *log);
