#include<stdio.h>
int main()
{
    int a,i;
    i=0;
printf("enter the integer:"); 
scanf("%d", &a);
printf("the integers are:\n");

do
{
printf("%d\n",++i);
}
while(i<a);

return 0;
}




/*
#include<stdio.h>
int main()
{
int a;
printf("enter the integer:");
scanf("%d", &a);
printf("the integers are:\n");

do
{
printf("%d\n",a--);
}
while(a>=1);
return 0;
}
*/