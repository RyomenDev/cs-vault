#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    int a[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // scanf("%d", &a[i][j]); //&a[i][j]---> *(a+i)+j
            scanf("%d", *(a + i) + j);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("%d ", a[i][j]); // a[i][j]---> *(*(a+i)+j)
            printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
    getch();
    return 0;
}