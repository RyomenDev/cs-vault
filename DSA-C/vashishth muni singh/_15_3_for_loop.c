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
    char address[50]="lucknow uttarpradesh";

    //name=berlin;    //wrong
    //for (int i = 0; i < 5; i++)       //berli
    //for (int i = 0; i < 9; i++)       //berlin
    //for (int i = 0; i < 6; i++)       //berlin
    for (int i = 0; i < 7; i++)         //berlin
    { 
        printf("%c", name[i]);
    }

    printf("\n");

      for (int i = 0; i < 20; i++)       
    { 
        printf("%c",address[i]); //lucknow uttarpradesh
    }

     printf("\n******************************************\n");

     printf("%s\n",name);
     printf("%s\n",address);
    getch();
    return 0;
}