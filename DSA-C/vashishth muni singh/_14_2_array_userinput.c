#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");

    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &ar[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("value of %d is %d\n",i+1, ar[i]);
    }
    getch();
    return 0;
}

//need one more garbage value ,but why???