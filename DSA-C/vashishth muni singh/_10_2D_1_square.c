#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>
void pattern(int n);


int main()
{
system("cls");
int n;
printf("enter the value:\n");
scanf("%d",&n);
pattern(n);

getch();
return 0;
}


void pattern(int n)
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        printf("* ");
    }
    printf("\n");
}
}
*/