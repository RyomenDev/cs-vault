#include<stdio.h>
#include<stdlib.h> //system("cls")
#include<conio.h> //getch()
int main()
{
system("cls");
printf("%d\n",sizeof(int));             //4 
printf("%d\n",sizeof(short int));       //2
printf("%d\n",sizeof(long int));        //4
printf("%d\n",sizeof(long long int));   //8
getch();
return 0;
}