/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");

    int ar[3][4] = {{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 12}};
    //or ar[1][2]=5;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");

    int a = 1;
    int ar[3][4]; //= {{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 12}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ar[i][j] = a;
            a++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}