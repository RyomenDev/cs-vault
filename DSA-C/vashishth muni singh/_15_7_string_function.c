#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <conio.h>

int main()
{
    system("cls");
     char a1[20] = "lucknow";
    char a2[20] = "uttar pradesh";
    // printf("\nlength of a1: %d",strlen(a1)); //length of string= 7


    // strcpy(a1,a2);  //(in copy,to copy) a2 is copied in a1
    // printf("%s ",a1); printf("%s ",a2); //uttar pradesh uttar pradesh
    // strcpy(a1,"kashi");//kashi is copied into a1
    // printf("%s ",a1); printf("%s ",a2); //kashi uttar pradesh


    // puts(strcat(a1,a2)); //combines a1 & a2


    // int a;
    // // char a1[20] = "lucknow";
    // // char a2[20] = "lucknow";
    // strcpy(a2, a1);
    // // a = strcmp(a1, a2); //-1 (ascii l < ascii u)    // comparing a1 to a2
    // // a = strcmp(a2, a1); // 1  (ascii u > ascii l)
    // a = strcmp(a1, a2); // 0
    // printf("%d", a);
    // if (!strcmp(a1, a2))  //equal
    //     printf("equal");


    // puts(strrev(a1));  //reverse the order, wonkcul


     //a1[20] = "LUCKNOW";  // no change
    //  char a1[20] = "LUCKNOW";
    //  printf("%s\n",a1);
    // puts(strlwr(a1)); // all charecter in lower case lucknow
    // puts(strupr(a2)); //all character in upper case UTTAR PRADESH

    puts(strstr(a1,"ck")); //output from specific given char ,cknow
    puts(strstr(a2,"t")); //output from specific given char ,ttar pradesh
    getch();
    return 0;
}