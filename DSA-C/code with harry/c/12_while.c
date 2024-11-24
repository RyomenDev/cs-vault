#include<stdio.h>
int main()
{
int i, n;
printf("enter the integer:\n");
scanf("%d", &i);
printf("enter the end integer:\n");
scanf("%d",&n);
while (i<=n)
{
   printf("the integer in between & are, is %d\n",i);
   i++;
}

return 0;
}