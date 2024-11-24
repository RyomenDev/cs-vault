#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i, j, n;
    char name[50];
    int len;
    printf("enter your name:");
    gets(name);
    printf("enter value of n:");
    scanf("%d", &n);
    len = strlen(name);
    // print upper part of heart
    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < (n - i); j += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // prints lower triangular parts of heart
    for (i = n; i >= 1; i--)
    {
        for (i = n; i < n; j++)
        {
            printf(" ");
        }
        // print the name
        if (i == n)
        {
            for (j = i; j <= (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
            printf("%s", name);
            for (j = i; j <= (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = i; j <= (i * 2 - 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}