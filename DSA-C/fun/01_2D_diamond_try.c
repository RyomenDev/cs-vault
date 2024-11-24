#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>
void pattern_ur(int n);
void pattern_ul(int n);
void pattern_lr(int n);
void pattern_ll(int n);

int main()
{
    system("cls");
    int n = 4;
    printf("enter the value:\n");
    //scanf("%d", &n);
    pattern_ur(n);
     printf("\n");
    pattern_ul(n);
     printf("\n");
    pattern_lr(n);
     printf("\n");
    pattern_ll(n);
    printf("\n");

    getch();
    return 0;
}

void pattern_ur(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_ul(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }
        for (int j = (n - i + 1); j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern_lr(int n)
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

void pattern_ll(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (i - 1); j++)
        {
            printf("  ");
        }
        for (int j = (i); j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


// void pattern_lr(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// void pattern_lr(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n-i+1; j >=1; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
