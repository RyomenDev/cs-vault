#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[] = "aakash";
    int l = strlen(st);
    printf("the length of this string is %d", l);
    return 0;
}