#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");
char address[50];
printf("enter the address:\n");
//scanf("%c",&address);//wrong
//scanf("%c",address); //wrong
scanf("%s",&address);   //abc def -->abc  space treated as end
 printf("\n******************************************\n");
printf("%s",address);
getch();
return 0;
}


//  %c ---> %s  only one charecter