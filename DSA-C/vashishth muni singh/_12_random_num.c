#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");

    int gen_num;
    srand(time(0));         // to genrate different number different times
    gen_num = rand() % 100; // b/w 0 to 99
    printf("%d", gen_num);
    getch();
    return 0;
}