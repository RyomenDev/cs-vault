#include<stdio.h>
#include<conio.h>


int main()
{
//system("cls");

int a[3];
for (int i = 0; i < 3; i++)
{
   //scanf("%d",&a[i]);  //&a[i]=(a+i)
   scanf("%d",(a+i));  
}
for (int i = 0; i < 3; i++)  
{
   //printf("%d ",a[i]);  //a[i]=*(a+i)
   printf("%d ",*(a+i));
} 

getch();
return 0;
}