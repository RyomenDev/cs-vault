#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    int j = 1;
    while (j <= 10)
    {
        printf("%d\n", j);
        j++;
        if (j == 5)
        {
            j++;
            // break;
        }
        if (j == 6)
        {
            continue;
        }
    }
    getch();
    return 0;
}