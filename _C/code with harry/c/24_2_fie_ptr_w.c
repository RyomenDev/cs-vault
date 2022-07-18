#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");

FILE*fptr;
int num=45;
fptr=fopen("zgenerated.txt","w");
fprintf(fptr,"the number is %d",num);
fprintf(fptr,"\nthanks for using fprintf");
fclose(fptr);
getch();
return 0;
}