// wrong
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
    int arr[2][3][4]; //= {{{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 12}},
                      //                    {{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 12}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; j < 4; k++)
            {
                 arr[i][j][k] = 1;
                 a++;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; j < 4; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
        }
        //printf("\n");
    }
    getch();
    return 0;
}