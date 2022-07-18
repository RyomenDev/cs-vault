/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "berlin";
    decrypt(c);
    printf("decrypted string is :%s", c);

    return 0;
}
*/
#include <stdio.h>
#include <string.h>
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
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "berlin";
    encrypt(c);
    printf("encrypted string is :%s\n", c);
    decrypt(c);
    printf("decrypted string is :%s\n", c);

    return 0;
}