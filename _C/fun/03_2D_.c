#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
void pattern_l(int n);
void pattern_u(int n);


int main()
{
    system("cls");
    int n=4;
    printf("enter the value:\n");
    //scanf("%d", &n);
    pattern_u(n);
    pattern_d(n);
    getch();
    return 0;
}

void pattern_d(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_u(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }
        for (int j = (n - i+1); j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}