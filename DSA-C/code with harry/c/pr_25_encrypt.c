#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char c[] = "berlin";
    encrypt(c);
    printf("encrypted string is :%s", c);

    return 0;
}