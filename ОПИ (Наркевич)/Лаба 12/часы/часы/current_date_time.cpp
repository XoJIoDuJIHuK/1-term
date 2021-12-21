#include <time.h>
#include <stdio.h>
#include "current_date_time.h"

int current_date_time(void)
{
    time_t result = time(NULL);
    char str[30];
    ctime_s(str, sizeof str, &result);
    printf("%s", str);
}