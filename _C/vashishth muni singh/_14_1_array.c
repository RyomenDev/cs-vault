#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<conio.h>


int main()
{
system("cls");
int x=5,y=7;
int ar[5]={1,2,3,4,5};
printf("%d\n",ar[0]);//1

ar[0]=7;        //value change
printf("%d\n",ar[0]);//7

printf("/n");

int arr[5];
arr[0]=2;
arr[3]=4;
arr[2]=6;
for (int i = 0; i < 5; i++)
{
   printf("%d\n",arr[i]);  // other will have garbage value
}
getch();
return 0;
}