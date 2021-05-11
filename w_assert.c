#include <stdio.h>

#define LOG_LOC_BYTE 80
typedef struct tagAssert
{
    unsigned int line;
    char loc[LOG_LOC_BYTE];
}Assert;
Assert g_assert;
