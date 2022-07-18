#include<stdio.h>
int main()
{
int a;
printf("enter the integer:");
scanf("%d",&a);
printf("increments:%d\n",++a);
printf("increments:%d\n",++a);
a++;    //print then increment 
++a;    //increment then print
printf("the integer after two more increment:%d\n",a);

a+=10;  //increment by 10
printf("further after 10 more incremets:%d\n",a);


return 0;
}