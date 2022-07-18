#include <stdio.h>
//#include<string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m+i) < n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i]='\0';
}

int main()
{
    char st[] = "berlin";
    slice(st, 1, 4);
    printf("%s", st);
    return 0;
}