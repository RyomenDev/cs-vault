#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    int x = 6, y = 8;
    y = x++; // output x=7   y=6
    y = ++x; // output x=7    y=7

    // both x=8 y=8
    printf("%d %d\n", &x, &y);
    printf("%d %d", x, y);
    getch();
    return 0;
}