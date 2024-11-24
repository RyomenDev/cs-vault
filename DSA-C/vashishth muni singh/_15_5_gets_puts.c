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
    printf("enter the address:\n");
    // scanf("%s",&address);   //abc def -->abc  space treated as end
    //gets(address); // abc def -->abc def  no effect of space
    scanf("%[^n]",&address);        //using ctrl+z 
                                     //abc def -->abc def  no effect of space
    
    printf("\n******************************************\n");

     printf("%s", address);
   // puts(address); // abc def -->abc def  no effect of space
    getch();
    return 0;
}