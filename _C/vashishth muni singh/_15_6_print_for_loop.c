#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
    char address[50];
    printf("enter your address:\n");
    gets(address);

    //for (int i = 0; address[i] != '\0'; i++)
    for (int i = 0; address[i]; i++)
    {
        printf("%c ", address[i]);  //  %c==%C
    }
    getch();
    return 0;
}