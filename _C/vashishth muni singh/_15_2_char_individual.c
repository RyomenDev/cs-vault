#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    char name[7] = {'b', 'e', 'r', 'l', 'i', 'n', '\0'};
    int i=0;
    while (name != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    getch();
    return 0;
}